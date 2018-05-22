#include <stdio.h>

//�ж�a��b�����Լ�� 
int Gcd(int a, int b)
{
	int c;
	while ( b>0 ) {
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int cn, n, gcd;
	scanf("%d", &cn);
	int tag[32768];
	
	while (cn--) {
		scanf("%d", &n);
		int cnt = 0;
		
		//��ʼ��������飬0��ʾ��δ���� 
		for (int i=1; i<n; i++)
			tag[i] = 0;
		//��1��ʼ��n-1���ж���n�Ƿ��� 
		for (int i=1; i<n; i++) {
			if(tag[i])
				continue;
			gcd = Gcd(n, i);
			if(gcd==1)			//�����Լ��Ϊ1����i��n���� 
				cnt++;
			else {				//i��n�����ʣ���i�ı�����nҲ������ 
				for(int j=1; j*i<n; j++)		//��i�ı������Բ������� 
					tag[i*j] = 1;
			}	
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
