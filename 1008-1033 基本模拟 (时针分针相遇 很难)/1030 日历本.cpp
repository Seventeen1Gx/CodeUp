#include <stdio.h>

int isLeap(int year)
{
	if ( year%4 == 0 && year%100 != 0 || year%400 == 0 )
		return 1;
	return 0;
}

int Zeller(int year, int month, int day)			//蔡勒公式算该年1月1号星期几 
{
	if(month==1||month==2) {						//判断month是否为1或2　
		year--;
		month+=12;
	}
	
	int c = year/100;
	int y = year-c*100;
	int week = (c/4)-2*c+(y+y/4)+(13*(month+1)/5)+day-1;
	while (week<0) { 
		week += 7;
	}
	week %= 7;
	return week;
} 

void Month(int mon[][21], int m, int start, int days)	//start表示该月开始星期数，星期天看成0 
{
	int i, j, n, flag;
	
	n = 1;
	flag = 1;				//处理每月开头的空白 
	for (i=0; i<6; i++) 
		for (j=m; j<m+7; j++) {
			if ( flag && j<m+start ) {
				mon[i][j] = 0;				
			} else if ( days > 0 ) {
				flag = 0;
				mon[i][j] = n;
				n++;
				days--;	
			} else {
				mon[i][j] = 0; 
			}
		}	
}

int main()
{									
	int year, start, Feb_days;
	int month[6][21];
	while (scanf("%d", &year) != EOF) {
		if ( isLeap(year) )
			Feb_days = 29;
		else
			Feb_days = 28;
	
		printf("                              %d                             \n\n", year);
	
		printf("      January               February               March        \n");
		printf("Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa\n");
		start = Zeller(year, 1, 1);
		Month(month, 0, start, 31);
		start = Zeller(year, 2, 1);
		Month(month, 7, start, Feb_days);
		start = Zeller(year, 3, 1);
		Month(month, 14, start, 31);
	
		for (int i=0; i<6; i++) {
			for (int j=0; j<21; j++) {
				if (month[i][j] == 0)
					printf("  ");
				else 
					printf("%2d", month[i][j]);
			
				if (j != 20)
					printf(" ");
				if (j == 6 || j == 13)
					printf(" ");
				}
			printf("\n");
		}
	
	
		printf("       April                  May                   June        \n");
		printf("Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa\n");
		start = Zeller(year, 4, 1);
		Month(month, 0, start, 30);
		start = Zeller(year, 5, 1);
		Month(month, 7, start, 31);
		start = Zeller(year, 6, 1);
		Month(month, 14, start, 30);
	
		for (int i=0; i<6; i++) {
			for (int j=0; j<21; j++) {
				if (month[i][j] == 0)
					printf("  ");
				else 
					printf("%2d", month[i][j]);
			
				if (j != 20)
					printf(" ");
				if (j == 6 || j == 13)
					printf(" ");
				}
			printf("\n");
		}
	
	 	
		printf("        July                 August              September      \n");
		printf("Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa\n");
		start = Zeller(year, 7, 1);
		Month(month, 0, start, 31);
		start = Zeller(year, 8, 1);
		Month(month, 7, start, 31);
		start = Zeller(year, 9, 1);
		Month(month, 14, start, 30);
	
		for (int i=0; i<6; i++) {
			for (int j=0; j<21; j++) {
				if (month[i][j] == 0)
					printf("  ");
				else 
					printf("%2d", month[i][j]);
			
				if (j != 20)
					printf(" ");
				if (j == 6 || j == 13)
					printf(" ");
				}
			printf("\n");
		}
	
	
		printf("      October               November              December      \n");
		printf("Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa\n");
		start = Zeller(year, 10, 1);
		Month(month, 0, start, 31);
		start = Zeller(year, 11, 1);
		Month(month, 7, start, 30);
		start = Zeller(year, 12, 1);
		Month(month, 14, start, 31);
	
		for (int i=0; i<6; i++) {
			for (int j=0; j<21; j++) {
				if (month[i][j] == 0)
					printf("  ");
				else 
					printf("%2d", month[i][j]);
			
				if (j != 20)
					printf(" ");
				if (j == 6 || j == 13)
					printf(" ");
				}
			printf("\n");
		}
	}	 	 	
	return 0;
}
