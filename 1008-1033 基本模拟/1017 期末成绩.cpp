#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	int n, k, count, x[1000];
	while ( t-- ) {
		scanf("%d %d", &n, &k);
		
		for ( int i=0; i<n; i++ )	//录入所有成绩 
			scanf("%d", &x[i]);
		
		count = 0;
		for ( int i=0; i<n; i++ )	//遍历统计 
			if ( x[i] > x[k-1] )	//数组序号从0开始，所以这里k-1表示小明 
				count++;
				
		printf("%d\n", count);
	}
	return 0;
}
