#include <stdio.h>
//��������ͬ����һ
//�н����ɼ� a^b = b^a
//�н���ɼ� (a^b)^c = a^(b^c)
//�� a^a = 0��a^0 = a
//���˶�һ�޶��������������������ż���� 
//��� = n1 ^ n2 ^ n3 ^ ����^nn

int main()
{
	int n, a, special;
	scanf("%d", &n);
	
	while (n) {
		special = 0;					//��ʼ��Ϊ0 
		for (int i=n; i>0; i--) {
			scanf("%d", &a);
			special ^= a;
		}
		
		printf("%d\n", special); 
		
		scanf("%d", &n);
	}
	
	return 0;
}
