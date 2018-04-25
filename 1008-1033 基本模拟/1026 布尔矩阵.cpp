#include <stdio.h>

int Judge(int a[][100], int n, int&row, int&col)
{
		int row_cnt, col_cnt;			//处理行,列
		int row_sum, col_sum; 
		
		row_sum = col_sum = 0;   
		row_cnt = col_cnt = 0;                            
		for (int i=0; i<n; i++)			 
			for (int j=0; j<n; j++)	{
				row_sum += a[i][j];
				col_sum += a[j][i];
				
				if (j == n-1) {			//已统计完一行和一列的和，开始判断 
				
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
					
					row_sum = col_sum = 0;			//下一行、下一列重新开始 
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
	
	
	int row_cnt, col_cnt;               //不满足要求的行数，列数 
	int row, col;                       //不满足要求的行号，列号 
	int row_sum, col_sum;				//当前行的和，当前列的和	
	int flag;		
	 
	while ( n!=0 ) {
		
		for (int i=0; i<n; i++)			//读入矩阵 
			for (int j=0; j<n; j++)
				scanf("%d", &a[i][j]);
		
		row = col = -1;
		flag = Judge( a, n, row, col );
		
		if ( flag==1 )
			printf("OK\n");
		else if ( flag==2 ) {				//看是否能修改 
			
			if ( a[row][col]==0 )			//改变一位 
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
