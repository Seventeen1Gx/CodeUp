#include <stdio.h>
//�ı䲼�������һ��Ԫ�أ���Ӱ���Ԫ�����������е���ż 
//�����г���һ�л򳬹�һ��Ϊ�����ͣ���һ��������Ҫ�󣬼�ʹ�޸�һλҲû�� 
//���պ���һ�к�һ�в�����Ҫ��ʱ����ʱͨ���޸����н��洦��Ԫ�ؼ�������Ҫ�� 



//�б�a�����Ƿ�����Ҫ��row��col���ز�����Ҫ����кź��к�
//����0��������Ҫ�󣬷���1�������㣬����2�������ͨ���޸�һλ��ʹ֮����Ҫ�� 
int Judge(int a[][100], int n, int&row, int&col)
{
		int row_cnt, col_cnt;			//������Ҫ�������������
		int row_sum, col_sum; 		    //��ǰ�еĺͣ���ǰ�еĺ�
		
		row_sum = col_sum = 0;   
		row_cnt = col_cnt = 0;                            
		for (int i=0; i<n; i++)			 
			for (int j=0; j<n; j++)	{
				row_sum += a[i][j];		//���б��� 
				col_sum += a[j][i];		//���б��� 
				
				if (j == n-1) {			//��ͳ����һ�к�һ�еĺͣ���ʼ�ж� 
				
					if ( row_sum % 2 == 1 ) {	//���ܺ�Ϊ���� 
						row_cnt++;				//ͳ�Ʋ�������и��� 
						row = i;				//���¸��к� 
						if ( row_cnt > 1 )		//������Ҫ�����������1�����޷���� 
						 	return 0;
					}
					
					if ( col_sum % 2 == 1 ) {	//����ͬ�������й۵� 
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
	
	
	int row, col;                       //������Ҫ����кţ��к� 
	int flag;		
	 
	while ( n!=0 ) {
		
		for (int i=0; i<n; i++)			//������� 
			for (int j=0; j<n; j++)
				scanf("%d", &a[i][j]);
		
		row = col = -1;
		flag = Judge( a, n, row, col );
		
		if ( flag==1 )
			printf("OK\n");
		else if ( flag==2 ) {				//���ڿ����޸�һλ����� 
			printf("Change bit (%d,%d)\n", row+1, col+1);	
		} else
			printf("Corrupt\n");
		
		scanf("%d", &n);
	}
	
	return 0;
}
