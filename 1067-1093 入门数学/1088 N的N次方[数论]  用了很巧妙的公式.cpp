//N^N=10^(NlgN)
//��NlgN=a+b��aΪ������bΪС��
//��N^N=10^b * 10^a   ���߽�ǰ������ 
//��Ϊ1<=10^b<10
//����10^b���������־��Ǵ�

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	
	while ( ~scanf("%d", &n) ) {
		double c = n * log10(n);
		int a = int(c);
		double b = c - a;
		int d = pow(10, b);
		printf("%d\n", d);
	}
	return 0;
} 
