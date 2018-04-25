#include <stdio.h>
const int AGE = 18;

bool isLeap(int year)
{
	if (year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}

int MonthToMonth(int start, int end, int Feb_days)
{
	int sum = 0;
	switch (start) {
			case 1: sum += 31;
					if( end == 1 ) break;
			case 2: sum += Feb_days;	
					if( end == 2 ) break;
			case 3: sum += 31;
					if( end == 3 ) break;
			case 4: sum += 30;
					if( end == 4 ) break;
			case 5: sum += 31;
					if( end == 5 ) break;
			case 6: sum += 30;
					if( end == 6 ) break;
			case 7: sum += 31;
					if( end == 7 ) break;
			case 8: sum += 31;
					if( end == 8 ) break;
			case 9: sum += 30;
					if( end == 9 ) break;
			case 10: sum += 31;
					if( end == 10 ) break;
			case 11: sum += 30;
					if( end == 11 ) break;
			case 12: sum += 31;
					if( end == 12 ) break;
		}
	return sum;	
}

int main()
{
	int t;
	scanf("%d", &t);
	int year, month, day, Feb_days;
	int sum;
	
	while (t--) {
		sum = 0;
		scanf("%d-%d-%d", &year, &month, &day);
		
		if(!isLeap(year+AGE) && month==2 && day==29 ) {
				printf("%d\n", -1);
				continue;
			}
		
		if ( isLeap(year) )
			Feb_days = 29;
		else
			Feb_days = 28;
			
		sum += MonthToMonth(month, 12, Feb_days);
		//printf("%d�µ�12����%d��\n", month, sum);
		 
		
		for (int i=year+1; i<year+AGE; i++) {
			if (isLeap(i)) {
				sum += 366;
				//printf("��%d���366�죬��ʱsum=%d\n", i, sum);	
			}
			else {
				sum += 365;
				//printf("��%d���365�죬��ʱsum=%d\n", i, sum);
			}
		}
		
		if ( isLeap(year+AGE) )
			Feb_days = 29;
		else
			Feb_days = 28;
			
		sum += MonthToMonth(1, month, Feb_days);
		//printf("����1�µ�%d�£������%d��\n", month, sum);
			
		switch (month) {
			case 1: sum -= 31;
					break;
			case 2: sum -= Feb_days;	
					break;
			case 3: sum -= 31;
					break;
			case 4: sum -= 30;
					break;
			case 5: sum -= 31;
					break;
			case 6: sum -= 30;
					break;
			case 7: sum -= 31;
					break;
			case 8: sum -= 31;
					break;
			case 9: sum -= 30;
					break;
			case 10: sum -= 31;
					break;
			case 11: sum -= 30;
					 break;
			case 12: sum -= 31;
					 break;
		}
		//printf("������\n"); 
		printf("%d\n", sum);
	}
	return 0;
}
