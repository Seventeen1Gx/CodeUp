#include <stdio.h>
//������˵����żλ��������λ���� 

int main()
{
	char s[51], t;
	int c, i;
	scanf("%d", &c);
	getchar();			//���ջ��������з� 
	
	while (c--) {
		gets(s);
		//��ż�����ַ����ַ��������ַ���Ϊһ�鴦��
		for (i=0; s[i] != '\0'; i += 2) {
			//������һ�����ַ���λ�� 
			t = s[i];
			s[i] = s[i+1];
			s[i+1] = t;
		}
		puts(s);
	}
}
