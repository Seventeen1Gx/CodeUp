#include <stdio.h>
//改变布尔矩阵的一个元素，会影响该元素所在行与列的奇偶 
//所以有超过一行或超过一列为奇数和，就一定不满足要求，即使修改一位也没用 
//当刚好有一列和一行不满足要求时，此时通过修改行列交叉处的元素即可满足要求 



//判别a矩阵是否满足要求，row与col返回不满足要求的行号和列号
//返回0代表不满足要求，返回1代表满足，返回2代表可以通过修改一位来使之满足要求 
int Judge(int a[][100], int n, int&row, int&col)
{
		int row_cnt, col_cnt;			//不满足要求的行数，列数
		int row_sum, col_sum; 		    //当前行的和，当前列的和
		
		row_sum = col_sum = 0;   
		row_cnt = col_cnt = 0;                            
		for (int i=0; i<n; i++)			 
			for (int j=0; j<n; j++)	{
				row_sum += a[i][j];		//按行遍历 
				col_sum += a[j][i];		//按列遍历 
				
				if (j == n-1) {			//已统计完一行和一列的和，开始判断 
				
					if ( row_sum % 2 == 1 ) {	//行总和为奇数 
						row_cnt++;				//统计不满足的行个数 
						row = i;				//记下该行号 
						if ( row_cnt > 1 )		//不满足要求的行数超过1，已无法挽救 
						 	return 0;
					}
					
					if ( col_sum % 2 == 1 ) {	//与上同理，但按列观点 
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
	
	
	int row, col;                       //不满足要求的行号，列号 
	int flag;		
	 
	while ( n!=0 ) {
		
		for (int i=0; i<n; i++)			//读入矩阵 
			for (int j=0; j<n; j++)
				scanf("%d", &a[i][j]);
		
		row = col = -1;
		flag = Judge( a, n, row, col );
		
		if ( flag==1 )
			printf("OK\n");
		else if ( flag==2 ) {				//属于可以修改一位的情况 
			printf("Change bit (%d,%d)\n", row+1, col+1);	
		} else
			printf("Corrupt\n");
		
		scanf("%d", &n);
	}
	
	return 0;
}
