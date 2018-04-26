#include <stdio.h>

//判断是否闰年 
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
			if ( isLeap(y) )	//是闰年，计数n就减小1 
				n--;
			y++;				//进入下一年 
		}
		printf("%d\n", y-1);		
	}
	return 0;
}
