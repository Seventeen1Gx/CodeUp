#include <stdio.h>
//��������м��� 

int main()
{
	int n;
	scanf("%d", &n);
	
	int a;
	while (n--) {
		scanf("%d", &a);
		
		int flag = 1;			//����Ƿ������ 
		while (a != 1) {			//��aΪ1ʱ����ѭ�� 
			if (a % 2 == 0) {		//aΪż�� 
				a /= 2;
			} else {				//aΪ���� 
				if(flag) {
					printf("%d", a); 	//�����һ������ 
					flag = 0;
				} else
					printf(" %d", a);	//���֮���������ע��ո� 
				a *= 3;
				a += 1;
			}
		}
		if (flag)
			printf("No number can be output !");
		printf("\n");
	}
	
	return 0;
} 
