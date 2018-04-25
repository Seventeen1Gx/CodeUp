#include <stdio.h>

int Judge(int a, int b);

int main()
{
	int n=1;
	
	while (n<51) {
		printf("%3d:  ", n);
		for ( int i=1; i<n; i++ ) {
			if ( Judge(n, i) )
				printf("%3d ", i);			
		}
		printf("\n");
		n++;
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
