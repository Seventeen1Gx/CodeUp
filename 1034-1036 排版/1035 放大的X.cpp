#include <stdio.h>
//�۲�������ɣ���������n
//���ÿ�е��б��0��1��2��������(n-1)/2��������2��1��0
//���Ϊi�����ַ���n-i����0��ʼ��ţ�n-i-1��i�����X����������ո�


//��������n��������i���� 
void printLine(int n, int i)        //i���кţ����㿪ʼ��ÿ���ַ���� 
{
	for (int j=0; j<n-i; j++)	//���n-i���ַ� 
		if(j==i || j==n-i-1)	//n-i-1��i�����X 
			printf("X");
		else 					//��������ո� 
			printf(" ");		
	printf("\n");				//ĩβ���з� 
}

//�Ŵ��㷨 
void enlarge(int n)
{	
	int i = 0;
	while ( i <= (n-1)/2 ) {
		printLine(n, i);
		i++;
	} 
	//ѭ��������i=(n-1)/2 + 1;
	i -= 2;
	while ( i >= 0 ) {
		printLine(n, i);
		i--;
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		enlarge(n);
		printf("\n");
	}
	return 0;
}
