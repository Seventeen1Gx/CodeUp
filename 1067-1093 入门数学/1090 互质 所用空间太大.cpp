#include <stdio.h>
#include <math.h>
#include <string.h>

const int MAXSIZE = 100;

int Judge(int a, int b);  //  a>b 

void Filter(int a[], int n);

int tag[MAXSIZE] = {0};  // 1表示是素数 
 
int main()
{
	int n;
	Filter(tag, MAXSIZE);
	scanf("%d", &n);
	
	int cnt;
	while (n) {
		if (n==1) {
			printf("%d\n", n-1);
			scanf("%d", &n);
			continue;
		}
		if ( !tag[n] ) {
			printf("%d\n", n-1);
		} else {
			cnt = 1;
			
			for (int i=2; i<n; i++) {
				if ( (!tag[i] && n%i!=0)|| Judge(n, i)) {
					cnt++;
				} 	
			}
			printf("%d\n", cnt);
		}
		scanf("%d", &n);
	} 
	return 0;
}

int Judge(int a, int b)
{
	int c;
	
	while ( b!=0 ) {
		c = a % b;
		a = b;
		b = c;
	}
	
	if (a==1)
		return 1;
	return 0;
}

void Filter(int a[], int n)		
{
	a[1] = 1;
	for ( int i=2; i<=sqrt(n); i++ ) {
		if ( !a[i] ) {
			for ( int j=2; j<=n/i; j++ )
            {
                a[i*j] = 1;
            }
		}
	}
}


