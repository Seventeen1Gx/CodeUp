//一个矩阵，从左下角开始，填当棋子在这个位置时我来走的输赢情况，就会找到规律 
#include <stdio.h>

int judge(int n, int m)
{
	if ( n==m )                 	  //对角线上的规律是输赢输赢…… 
		if( n%2==0 )
			return 1;
		else
			return -1;
	else if ( n>m )
		if ( m%2==0 )           	//全赢 
			return 1;
		else {
			int flag = judge(m, m);
			if ( (n-m+1)%2==0 )
				return -flag;
			else
				return flag; 
		}
	else 
		if ( n%2==0 )
			return 1;
		else {
			int flag = judge(n, n);
			if ( (m-n+1)%2==0 )
				return -flag;
			else
				return flag;
		} 
		
}

int main()
{	
	int n, m;
	while (scanf("%d %d", &n, &m)) {
		if (n==0 && m==0)
			break;
		int flag = judge(n, m);
		if (flag==1)
			printf("Wonderful!\n");
		else
			printf("What a pity!\n");
	}
	
	return 0;
}
