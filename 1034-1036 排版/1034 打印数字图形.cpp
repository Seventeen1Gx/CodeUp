#include <stdio.h>

void line(int n, int i)
{
	int j, k, flag;
	j = k = 0;
	flag = 1;

	while (1) 
		if ( j<n-1-i ) {
			j++;
			printf(" ");
		} else if ( k<=i && flag ) {
			k++;
			printf("%d", k);
			if (k>i)
				flag = 0;
		} else if ( k>1 ) {
			k--;
			printf("%d", k);
		} else {
			break;
		}
}

int main()
{
	int n;
	int i;
	int flag;
	while (scanf("%d", &n) != EOF) {
		i = 0;
		flag = 1;
		while (1) {
			if ( i<n && flag ) {
				line(n, i);
				printf("\n");
				i++;
				if ( i==n ) {
					i--;
					flag = 0;
				}
			} else if ( i>0 ) {
				i--;
				line(n,i);
				printf("\n");
			} else
				break;
		}
	}
	return 0;
}
