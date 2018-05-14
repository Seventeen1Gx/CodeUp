#include <stdio.h>
//利用排序后归并的思想即可
//注意合并后的数组大小最多可能是合并之前两数组大小之和 

//冒泡排序 
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
	int n, m;
	int a[10000], b[10000], c[20000];
	
	while ( scanf("%d %d", &n, &m) == 2 ) {
		//读入第一个数组 
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		//读入第二个数组 
		for(int i=0; i<m; i++)
			scanf("%d", &b[i]);
		//为两数组排序 
		sort(a, n);
		sort(b, m);
		
		
		//准备归并，利用三个游标分别跟踪三个数组 
		int i, j, k;
		i=j=k=0;
		
		while (i<n && j<m) {
			if ( a[i]<b[j] ) {
				c[k] = a[i];
				k++;
				i++;
			} else if ( a[i]>b[j] ) {
				c[k] = b[j];
				j++;
				k++;
			} else {			//相同时只存入一个，游标都加1，丢弃另一个 
				c[k] = a[i];
				i++;
				j++;
				k++;
			}
		}
		
		//读入剩下的 
		while (i<n) {
			c[k] = a[i];
			k++;
			i++;
		}
		while (j<m) {
			c[k] = b[j];
			k++;
			j++;
		}
		
		//输出结果 
		for (int i=0; i<k; i++)
			if(i==0)
				printf("%d", c[i]);
			else
				printf(" %d", c[i]);
		printf("\n"); 
	}
	return 0;
}
