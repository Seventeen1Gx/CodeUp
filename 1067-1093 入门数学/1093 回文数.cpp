#include <stdio.h>
#include <string.h>

int convert(int a[], int n, int base);

int judge(int a[], int n);

int main()
{
	int n;
	scanf("%d", &n);
	int tag[15];
	
	int num[20];
	
	while (n) {
		
		for (int i=0; i<15; i++)
			tag[i] = 0;
			
		int flag = 0;
		for (int i=2; i<=16; i++) {
			int m = convert(num, n, i);
			if ( judge(num, m) ) {
				flag = 1;
				tag[i-2] = 1;
			}
		}
		if ( flag ) {
			printf("Number %d is palindrom in basis", n);
			for (int i=0; i<15; i++) {
				if ( tag[i] )
					printf(" %d", i+2);
			}
		} else {
			printf("Number %d is not a palindrom", n);
		}
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}

int convert(int a[], int n, int base)
{
	int i=0;
	
	while (n) {
		a[i] = n % base;
		n /= base;
		i++; 
	}
	return i;
}

int judge(int a[], int n)
{
	for (int i=0, j=n-1; i<j; i++, j--) {
		if (a[i] != a[j])
			return 0;
	}
	return 1;
}
