#include <stdio.h>

int sep(int a[], int low, int high)
{
	int pivot = a[low];
	while (low<high) {
		while (low<high && a[high]>=pivot) --high;
		a[low] = a[high];
		while (low<high && a[low]<=pivot) ++low;
		a[high] = a[low];
	}
	a[low] = pivot;
	return low;
}

void quicksort(int a[], int low, int high)
{
	if (low<high) {
		int pivot = sep(a, low, high);
		quicksort(a,low, pivot-1);
		quicksort(a, pivot+1, high);
	}
}

void sort(int a[], int n)
{
	quicksort(a, 0, n-1);
}

int main()
{
	int n, a[1000];
	scanf("%d", &n);
	
	
	while (n) {
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
		
		sort(a, n);
		
		int p=n-1;
		
		int flag = 0;
		while (p>2) {
			int target = a[p];
			
			for (int i=0; i<p && !flag; i++) {
				for (int j=0, k=p-1; j<k; ) {
					if ( k==i ) {
						k--;
						continue;
					}
					if ( j==i ) {
						j++;
						continue;
					}
					int sum = a[i] + a[j] + a[k];
					if ( target>sum )
						k--;
					else if ( target<sum )
						j++;
					else {
						flag = 1;
						break;
					}
				}
			}
			if (flag)
				break;
			p--;
		}
		
		if ( !flag )
			printf("no solution\n");
		else
			printf("%d\n", a[p]);
		scanf("%d", &n);
	}
	
	return 0;
}
