#include <stdio.h>

long long cnt;

void Merge(long long a[], int begin, int mid, int end)
{
	long long b[500000];
	for (int i=begin; i<=end; i++) {
		b[i] = a[i];
	}
	int i=begin, j=mid+1, k=begin;
	
	while (i<=mid && j<=end) {
		if (b[i]<=b[j]) {
			a[k] = b[i];
			k++;
			i++;
		} else {
			cnt += j-k;
			a[k] = b[j];
			k++;
			j++;
		}
	}
	while(i<=mid)  
    {  
        a[k++]=b[i++];  
    }  
    while(j<=end)  
    {  
        a[k++]=b[j++];  
    }  
}

void MergeSort(long long a[], int begin, int end)
{
	if (begin<end) {
		int mid = (begin+end)/2;
		MergeSort(a, begin, mid);
		MergeSort(a, mid+1, end);
		Merge(a, begin, mid, end);
	}
}

int main()
{
	long long a[500000];
	int n;
	scanf("%d", &n);
	
	while (n) {
		for (int i=0; i<n; i++)
			scanf("%lld", &a[i]);
		cnt = 0;
		MergeSort(a, 0, n-1);
		printf("%lld\n", cnt);
		scanf("%d", &n);	
	}
	
	return 0;
}
