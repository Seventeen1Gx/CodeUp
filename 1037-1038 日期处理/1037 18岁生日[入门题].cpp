#include <stdio.h>
const int AGE = 18;
//从出生到18岁生日的时间可分为三段：
//出生那年后半段+17年+18岁那年前半段 

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
	int year, month, day;
	int sum;
	
	while (t--) {
		sum = 0;
		scanf("%d-%d-%d", &year, &month, &day);
		
		//出生于闰年，18年后不是闰年 
		if(!isLeap(year+AGE) && month==2 && day==29 ) {
			printf("%d\n", -1);
			continue;
		}
		
		//首先18年必有18个365 
		sum = AGE * 365; 
		
		//考虑闰年多出的天数
		//先考虑完整的中间17年 
		for (int i = year+1; i < year+AGE; i++)
			if (isLeap(i)) 
				sum += 1;
		
		//再考虑首年生日到年末和末年年初到生日这两段时间 
		if (month == 1 || (month == 2 && day < 29)) {	//首年生日到年末可能包含2月29日 
			if (isLeap(year))							//从而当首年闰年，多出一天 
				sum++;
		} else										//18岁那年年初到生日可能包含2月29 
			if (isLeap(year+AGE))					//从而当18岁那年闰年，多出一天 
				sum++;
		
		printf("%d\n", sum);
	}
	return 0;
}
