#include <stdio.h>

int main()
{
	int n, a[100], b, max, top;
	scanf("%d", &n);
	
	while (n) {
		max = 0;						//max为目前为止入栈元素中最大数 
		top = -1;
		
		int i;
		int flag = 1;
		for ( i=0; i<n; i++) {
			scanf("%d", &b);
			if ( b>max )	{   				//b未入过栈 
				 for (int j=max+1; j<=b; j++) {
				 	a[++top] = j;
				 }
				 --top;			//b出栈
				 max = b; 
			} else if ( b != a[top] ) {    //已入过栈，这里要求出栈 
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
