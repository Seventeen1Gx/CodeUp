#include <stdio.h>

void line (int n, int l)        //l是行号，从零开始 
{
	for (int i=0; i<n-l; i++)
		if(i==l || i==n-l-1)
			printf("X");
		else 
			printf(" ");
	printf("\n");
}

void enlarge(int n)
{	
	int i=0, flag=1;
	while (1) {
		if ( i<n/2+1 && flag ) {
			line(n, i);
			i++;
			if ( i==n/2+1 ) {
				flag = 0;
				i--;
			}
		} else if ( i>0 ) {
			i--;
			line(n, i);
		} else
			break;
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		enlarge(n);
		printf("\n");
	}
	return 0;
}
