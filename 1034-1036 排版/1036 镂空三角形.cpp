#include <stdio.h>
//�۲�������ɣ���������n 
//��һ�����n���ַ����ڶ������n+1���ַ������������n+2���ַ���
//�������ƣ����һ�����2n-1���ַ�
//�����n�� 
//�к�i��0��ʼ����Ҫ���n+i���ַ�����n-i��n+i�������ĸ����������ո� 
//���һ�б��Ϊi-1��ȫ�������ĸ 

//��������n��c�������l�� 
void printLine(int i, int n, char c)
{
	for (int j=1; j<= n+i; j++) {		//ÿ�����n+i���ַ� 
		if(  i==n-1 ) {				//���һ�е���� 
			printf("%c", c);
			continue;
		}
		if ( j==n+i ||  j==n-i )	//n-i��n+i�������ĸ
			printf("%c", c);
		else						//��������ո� 
			printf(" ");
	}
	printf("\n");
}

int main()
{
	char c;
	int n;
	scanf("%c", &c);
	
	while ( c != '@' ) {
		scanf("%d", &n);
		for (int i=0; i<n; i++) 
			printLine(i, n, c);
		printf("\n");
		getchar();						//���ջ��з� 
		scanf("%c", &c);	
	}
	return 0;
}
