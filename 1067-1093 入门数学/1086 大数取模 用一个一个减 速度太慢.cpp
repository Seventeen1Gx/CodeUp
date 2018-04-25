#include <stdio.h>
#include <string.h>

void minus(char a[], char b[], int len1, int len2);

int main()
{
	char a[1001], b[6];
	
	while ( scanf("%s %s", a, b) != EOF ) {
		int len1 = strlen(a);
		int len2 = strlen(b);
		
		int i=0;
		while ( a[i] == '0' ) i++;
		
		while ( len1 - i > len2 ) {
			minus(a, b, len1-1, len2-1);
			i=0;
			while ( a[i] == '0' ) i++;
		}
		
		int j=0, flag = 0;
		while ( i<len1 ) {
			if ( a[i]<b[j] ) {
				flag = 1;
				break;
			} else if ( a[i]>b[j] ) {
				flag = 0;
				break;	
			}
		}
		
		if (!flag)
			minus(a, b, len1-1, len2-1);
		
		int flag2 = 1;
		for (i=0; i<len1; i++) {
			if( a[i] != '0' )
				flag2 = 0;
			if ( flag2 )
				continue;
			printf("%c", a[i]);
		}
		printf("\n");
	}
	return 0;
}

void minus(char a[], char b[], int i, int j)
{
	while (j>=0) {
		int t = i;
		if ( a[t] < b[j] ) {
			while ( a[t-1] == '0' ) {      //这里不用考虑不够减，在主函数里考虑就行 
				a[t-1] = '9';
				t--;
			}
			a[t-1] -= 1;
			a[i] += 10;
		}
		a[i] = a[i] - b[j] + '0';
		i--;
		j--;		
	}
}
