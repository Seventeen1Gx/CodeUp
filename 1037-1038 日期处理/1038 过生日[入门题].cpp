#include <stdio.h>

//�ж��Ƿ����� 
bool isLeap(int year)
{
	if (year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	
	int y, n;
	while (t--) {
		scanf("%d %d", &y, &n);
		
		while ( n>0 ) {
			if ( isLeap(y) )	//�����꣬����n�ͼ�С1 
				n--;
			y++;				//������һ�� 
		}
		printf("%d\n", y-1);		
	}
	return 0;
}
