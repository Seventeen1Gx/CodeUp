#include <stdio.h>

//判断是否闰年 
int isLeap(int year)
{
	if ( year%4 == 0 && year%100 != 0 || year%400 == 0 )
		return 1;
	return 0;
}


//蔡勒公式算该年1月1号星期几 
int Zeller(int year, int month, int day) 
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
	week %= 7;		//0代表周日，1代表周一，依次类推 
	return week;
} 

//用month矩阵来存储横向三个月的结果 
//start表示该月开始星期数，星期天看成0
//m表示每月所占区域的开始列下标
//days表示该月天数 
void Month(int mon[][21], int m, int start, int days)	 
{
	int i, j, n, flag;
	
	n = 1;
	flag = 1;				 
	for (i=0; i<6; i++)						//处理范围为0至5行，m至m+6列 
		for (j=m; j<m+7; j++) {
			if ( flag && j<m+start ) {		//处理每月开头的空白
				mon[i][j] = 0;				
			} else if ( days > 0 ) {		//从1号开始填 
				flag = 0;
				mon[i][j] = n;
				n++;
				days--;	
			} else {						//处理结尾空白 
				mon[i][j] = 0; 
			}
		}	
}

int main()
{									
	int year, start, Feb_days;
	//横向三个月所占区域来6*21个格子 
	int month[6][21];
	while (scanf("%d", &year) != EOF) {
		if ( isLeap(year) )
			Feb_days = 29;
		else
			Feb_days = 28;
	
		printf("                              %d                             \n\n", year);
	
		//处理横向三个月 
		printf("      January               February               March        \n");
		printf("Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa  Su Mo Tu We Th Fr Sa\n");
		//该年1月1日起始星期 
		start = Zeller(year, 1, 1);
		//范围为0至5行，0至6列 
		Month(month, 0, start, 31);
		//该年2月1日起始星期
		start = Zeller(year, 2, 1);
		//范围为0至5行，7至13列 
		Month(month, 7, start, Feb_days);
		//该年3月1号其实星期 
		start = Zeller(year, 3, 1);
		//范围为0至5行，14至20列 
		Month(month, 14, start, 31);
		
		//根据month矩阵输出结果 
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
	
		//同理 
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
	
	 	//同理
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
	
		//同理
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
