#include <stdio.h>

int main()
{
	char c1, c2; 
	char s[201];
	int cnt, sum;
	
	while ( (c1=getchar()) != EOF ) {
		//C1��C2�ֱ��ȡ��ָ���ַ��Ĵ�д��Сд��ʽ 
		if ( c1>='a' && c1<='z')
			c2 = c1 - 'a' + 'A';
		else
			c2 = c1 - 'A' + 'a';
		//���տո� 
		getchar();
		scanf("%s", s);
		//���ջ��� 
		getchar();
		
		//cntΪָ�����ʳ��ִ�����sumΪ���ʵ�ȫ����ĸ���� 
		cnt = sum = 0;
		for (int i=0; s[i] != '\0'; i++) {
			//�����ִ�Сд��ͳ�� 
			if ( s[i] == c1 || s[i] == c2 )
				cnt++;
			sum++;
		}
		printf("%.5f\n", 1.0*cnt/sum);
	} 
}
