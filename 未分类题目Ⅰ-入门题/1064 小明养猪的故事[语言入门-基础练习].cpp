#include <stdio.h>
//��ʵ��һ��쳲������������� 

int main() 
{
	int t;
	scanf("%d", &t);
	
	int n;
	while (t--) {
		int a, b, c;
		a = 1;
		b = 2;
		scanf("%d", &n);
		
		if (n==1)
			printf("%d\n", a);
		else if (n==2)
			printf("%d\n", b);
		else {
			for (int i=0; i<n-2; i++) {
				c = a + b;      			//a��b˫���ƶ���ʼ�շֱ�ָ��ǰ���ǰ���� 
				a = b; 
				b = c;
			}
			printf("%d\n", c);
		}
	}
	
	
	return 0;
}
