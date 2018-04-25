#include <stdio.h>

void sort(int a[], int n)
{
	int t;
	for(int i=0; i<n; i++) {
		int flag = 1;
		for (int j=0; j<n-i-1; j++) {
			if ( a[j] > a[j+1] ) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 0;
			}
		}
		if (flag)
			return;
	}
}

int main()
{
	int c;
	scanf("%d", &c);
	
	int n, a[10], min = 100, submin = 100;
	while (c--) {
		scanf("%d", &n);
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
		
		sort(a, n);
		int flag = 1;
		for (int i=1; i<n; i++) {
			if ( a[i-1] != a[i] ) {
				printf("%d\n", a[i]);
				flag = 0;
				break;
			}
		}
		if (flag)
			printf("NO\n");

	}
	return 0;
	
}
