#include <stdio.h>

int min; 
void MinTips(int n) 		//n��ʾ�ݹ������ʣ��Ǯ 
{
	if ( n>=0 ){			//ʣ��ǮС��0ʱ�����ݹ� 
		if ( n<min )		//��ǰʣ��Ǯ������С���� 
			min = n;		//��������С��Ϊn 
		MinTips(n-350);		//��350Ԫ��ʣ��Ǯn-350�����ݹ� 
		MinTips(n-200);		//��200Ԫ��ʣ��Ǯn-200�����ݹ� 
		MinTips(n-150);		//��150Ԫ��ʣ��Ǯn-150�����ݹ� 
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		min = n;			//��ʼ����С��ΪnԪ����ʲô������ 
		MinTips(n);			//���еݹ� 
		printf("%d\n", min);
	}
}
