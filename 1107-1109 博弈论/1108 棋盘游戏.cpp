//һ�����󣬴����½ǿ�ʼ������������λ��ʱ�����ߵ���Ӯ������ͻ��ҵ����� 
#include <stdio.h>

int judge(int n, int m)
{
	if ( n==m )                 	  //�Խ����ϵĹ�������Ӯ��Ӯ���� 
		if( n%2==0 )
			return 1;
		else
			return -1;
	else if ( n>m )
		if ( m%2==0 )           	//ȫӮ 
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
