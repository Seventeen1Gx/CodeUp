#include <stdio.h>
//Ѱ���������Ĺ���
//��������n�������������б��Ϊi
//i�ı仯����Ϊ1��2��3��������n��n-1��n-2��������1
//����ÿ�б��i��ÿ������Ϊn-i���ո�Ȼ��������ֻ����ַ���"123����i����321" 


//����Ϊn�����ڱ��Ϊi���У����ǰ���ո����n-i�� 
void printBlank(int i, int n)
{
	for (int j = 0; j < n - i; j++)
		printf(" ");
}

//����Ϊn�����ڱ��Ϊi���У�������ֻ����ַ���"123����i����321"
void printNumStr(int i, int n)
{
	int j;
	for (j = 1; j <= i; j++)
		printf("%d", j);
	
	//�ϸ�ѭ������ʱj=i+1�����ѭ����ʼjӦ��Ϊi-1 
	for ( j = j - 2; j >= 1; j--)
		printf("%d", j);
}

int main()
{
	int n;
	int i;
	while (scanf("%d", &n) != EOF) {
		//����i���� 
		i = 1;
		while ( i <= n ) {
			//���ǰ���հ�
			printBlank(i, n);
			//������ֻ���
			printNumStr(i, n);
			//����
			printf("\n");
			i++; 
		}
		//ѭ������i=n+1
		i = i - 2;
		while ( i >= 1 ) {
			//���ǰ���հ�
			printBlank(i, n);
			//������ֻ���
			printNumStr(i, n);
			//���У����һ�в��û��� 
			if ( i != 1 )
			 	printf("\n");
			i--;
		} 
	}
	return 0;
}
