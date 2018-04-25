#include <stdio.h>
#include <string.h>

void reverse(char a[], int n, int m)
{
	char t;
	while ( n<m ) {
		t = a[n];
		a[n] = a[m];
		a[m] = t;
		n++;
		m--;		
	}
}

void rotate(char a[], int n, int p)
{
	reverse(a, 0, p);
	reverse(a, p+1, n-1);
	reverse(a, 0, n-1);
}

int match(char a[], int n, char b[], int m, int start)
{
	for (int i=start; i<n; i++) {
		int j;
		for (j=0; j<m && i+j<n; j++) {
			if ( a[i+j] != b[j] ) {
				break;	
			}
		}
		if (j==m && i+j<=n)
			return i;
	}
	return -1;
}

int main()
{
	char a[1001], b[101];
	int tag[1001];
	
	while ( gets(a) && gets(b) ) {
		
		int pos;
		int cnt = 0;
		int len1 = strlen(a);
		int len2 = strlen(b);
		
		for (int i=0; i<len1; i++)
			tag[i] = 0;
		
		for (int i=0; i<len2;i++) {
			int start = 0;
			while ( start + len2 <= len1 ) {
				pos = match(a, len1, b, len2, start);
				if ( pos>=0 ) {
					if ( tag[pos] == 0 ) {
						cnt++;
						tag[pos] = 1;
					}
					start = pos+1;
				} else
					break;
			}
			rotate(b, len2, 0);
		}
		printf("%d\n", cnt);
	}
	
	return 0;
} 
