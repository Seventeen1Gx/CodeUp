#include <stdio.h>
const int AGE = 18;

//判断是否闰年 
bool isLeap(int year)
{
	if (year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}

//从start年起18年的天数 
int Sum(int start)
{
	int sum; 
	for (int i = start; i < start+AGE; i++)
		if (isLeap(i)) 
			sum += 366;
		else 
			sum += 365;
	return sum;
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
		
		int flag;
		if (month == 1 || (month == 2 && day < 29))	//考虑首年是否包括2月29 
			flag = 1;
		else										//考虑末年是否包含2月29 
			flag = 0;
				
		//按年加天数
		if (flag)
			sum = Sum(year);		//从出生年开始算 
		else
			sum = Sum(year+1);		//从出生年后一年 
		 
		
		printf("%d\n", sum);
	}
	return 0;
}
