#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char s1[50], s2[50], s3[100];
	int len, i, j;
	
	getchar();		//���ջ��������з� 
	
	while (n--) {
		gets(s1);		//�����һ���ַ��� 
		gets(s2);		//����ڶ����ַ��� 
		len = strlen(s1);
		
		for (i=0; i<len/2; i++)				//��һ���ַ���ǰ��δ���s3 
			s3[i] = s1[i];
	
		for (j=0; s2[j] != '\0'; j++)		//�ڶ����ַ�������s3 
			s3[i+j] = s2[j];
			
		for ( ; s1[i] != '\0'; i++)			//��һ���ַ������δ���s3 
			s3[i+j] = s1[i];
		
		s3[i+j] = '\0';						//��ӽ�β\0 
		puts(s3);
	}
}
