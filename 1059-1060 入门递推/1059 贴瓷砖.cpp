#include <stdio.h>
//���ƹ�ʽ����ҳ����README.md


//����2*n�ĵذ��ж��������跽�� 
int F(int n)
{
	if (n==1) {
		return 1;
	} else if (n==2) {
		return 3; 
	} else if (n>2) {
		return F(n-1) + 2 * F(n-2);
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	
	int n;
	while (t--) {
		
		scanf("%d", &n);
		printf("%d\n", F(n));
	}
	
	return 0;
}
