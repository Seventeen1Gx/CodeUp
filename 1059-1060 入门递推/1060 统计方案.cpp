#include <stdio.h>

int main()
{
	int c;
	scanf("%d", &c);
	int n;
	
	while (c--) {
		int a1 = 3;
		int a2 = 7;
		int a3;
		scanf("%d", &n);
		
		if (n==1)
			printf("%d\n", a1);
		else if (n==2)
			printf("%d\n", a2);
		else {
			for (int i=0; i<n-2; i++) {
				a3 = a1 * 3 + ( a2 - a1 ) * 2;  //a1ֱ��һ����Ȼ����3�ֿ��� 
				a1 = a2;						//a2-��a1ֱ�ߺ�Ŀ������� ��a1ʱ��ֱ�ߵģ�Ȼ����2�ֿ��� 
				a2 = a3;
			}
			printf("%d\n", a3);
		}
			
	}
	
	return 0;
}
