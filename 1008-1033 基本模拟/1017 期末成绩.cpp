#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	
	int n, k, count, x[1000];
	while ( t-- ) {
		scanf("%d %d", &n, &k);
		
		for ( int i=0; i<n; i++ )	//¼�����гɼ� 
			scanf("%d", &x[i]);
		
		count = 0;
		for ( int i=0; i<n; i++ )	//����ͳ�� 
			if ( x[i] > x[k-1] )	//������Ŵ�0��ʼ����������k-1��ʾС�� 
				count++;
				
		printf("%d\n", count);
	}
	return 0;
}
