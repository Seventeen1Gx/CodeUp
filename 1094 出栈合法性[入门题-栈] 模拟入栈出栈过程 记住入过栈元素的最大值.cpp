#include <stdio.h>

int main()
{
	int n, a[100], b, max, top;
	scanf("%d", &n);
	
	while (n) {
		max = 0;						//maxΪĿǰΪֹ��ջԪ��������� 
		top = -1;
		
		int i;
		int flag = 1;
		for ( i=0; i<n; i++) {
			scanf("%d", &b);
			if ( b>max )	{   				//bδ���ջ 
				 for (int j=max+1; j<=b; j++) {
				 	a[++top] = j;
				 }
				 --top;			//b��ջ
				 max = b; 
			} else if ( b != a[top] ) {    //�����ջ������Ҫ���ջ 
				flag = 0;
				break;
			} else 
				--top;
		}
		
		if (flag)
			printf("Yes\n");
		else {
			printf("No\n");
			if (i<n)
				while ( getchar() != '\n') ;
			
		}
			 
		scanf("%d", &n);
	}
	return 0;
}
