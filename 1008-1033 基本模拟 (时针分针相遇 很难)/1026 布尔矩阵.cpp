#include <stdio.h>

int Judge(int a[][100], int n, int&row, int&col)
{
		int row_cnt, col_cnt;			//������,��
		int row_sum, col_sum; 
		
		row_sum = col_sum = 0;   
		row_cnt = col_cnt = 0;                            
		for (int i=0; i<n; i++)			 
			for (int j=0; j<n; j++)	{
				row_sum += a[i][j];
				col_sum += a[j][i];
				
				if (j == n-1) {			//��ͳ����һ�к�һ�еĺͣ���ʼ�ж� 
				
					if ( row_sum % 2 == 1 ) {
						row_cnt++;
						row = i;
						if ( row_cnt > 1 )
						 	return 0;
					}
					
					if ( col_sum % 2 == 1 ) {
						col_cnt++;
						col = i;
						if ( row_cnt > 1 )
						 	return 0;
					}
					
					row_sum = col_sum = 0;			//��һ�С���һ�����¿�ʼ 
				}
			}
			
		if ( row_cnt == 0 && col_cnt == 0 )
			return 1;
		else if ( row_cnt == 1 && col_cnt == 1 )
			return 2;
		else
			return 0;
}

int main()
{
	int n, a[100][100];
	scanf("%d", &n);
	
	
	int row_cnt, col_cnt;               //������Ҫ������������� 
	int row, col;                       //������Ҫ����кţ��к� 
	int row_sum, col_sum;				//��ǰ�еĺͣ���ǰ�еĺ�	
	int flag;		
	 
	while ( n!=0 ) {
		
		for (int i=0; i<n; i++)			//������� 
			for (int j=0; j<n; j++)
				scanf("%d", &a[i][j]);
		
		row = col = -1;
		flag = Judge( a, n, row, col );
		
		if ( flag==1 )
			printf("OK\n");
		else if ( flag==2 ) {				//���Ƿ����޸� 
			
			if ( a[row][col]==0 )			//�ı�һλ 
				a[row][col] = 1;
			else 
				a[row][col] = 0;
				
			flag = Judge( a, n, row, col );
			
			if ( flag==1 )
				printf("Change bit (%d,%d)\n", row+1, col+1);
			else 
				printf("Corrupt\n");
			
		} else
			printf("Corrupt\n");
		
		scanf("%d", &n);
	}
	
	return 0;
}
