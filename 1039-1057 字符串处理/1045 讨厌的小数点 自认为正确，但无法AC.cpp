#include <stdio.h>
#include <string.h>
//����1.345��С�����1λ��3��2λ��4��3λ��5��4λ��4λ֮����0 


int main()
{
	int t;
	scanf("%d", &t);
	getchar();			//���ջ������еĻ��з� 
	char num[100];
	int n;
	
	while (t--) {
		//ȫ��Ԥ��Ϊ�ַ�0 
		memset(num, '0', sizeof(num));
		
		//scanf()�Կհ׷�Ϊ�ַ���¼�������־�����ڽ�β���\0 
		scanf("%s%d", num, &n);
		
		//����num[strlen(num)] == '\0'�Ƿ����
		//printf("%d\n", num[strlen(num)] == '\0');
		
		//��\0��Ϊ�ַ�0
		num[strlen(num)] = '0';
		getchar(); 		//���ջ������еĻ��з�
		
		int i = 0;
		while ( num[i] != '.' )
			i++;
		//ѭ������ʱnum[i]ΪС����
		printf("%c\n", num[i+n]);
	}	
	
	return 0;
}
