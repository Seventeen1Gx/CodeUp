/*
此题特殊在  3993  9999 这样的数 
*/
#include <stdio.h>
#include <string.h>

const int MAXSIZE = 10000;

int main()
{
	char s[MAXSIZE+2];			//+2是考虑到末尾\0和结果进位的情况 
	
	while ( gets(s) ) {
		int len = strlen(s);
		
		int i, j;
		//将左半边镜面投射到右半边
		//flag记录所得回文数与原数的大小变化情况
		//1表示小于或等于，0表示大于 
		int flag = 1; 
		for (i=0, j=len-1; i<j; i++, j--) {
			if (s[i] < s[j])
				flag = 1;                 
			else if (s[i] > s[j])
				flag = 0;
			s[j] = s[i];
		} 
		
		//标记是否增加一位 
		int flag2 = 0;
		
		//flag为1，说明新得回文数小于或等于原数 
		if ( flag ) {           
			while (1) {
				if (i == j) {			//只需处理一位 
					s[i]++;
					if ( s[i] <= '9' )	//无进位 
						break;
					s[i] = '0';
					i++;
					j--;
				} else {				//需要处理两位 
					s[i]++;
					s[j]++;
					if ( s[i] <= '9' )	//无进位 
						break;
					s[i] = s[j] = '0';
					i++;
					j--;
				}
				if (j < 0 ) {			//增加一位 
					flag2 = 1;
					break;
				}
			}
		}
		
		if ( flag2 ) {
			s[0] = s[len] = '1';
			s[len+1] = '\0';
			for (i=1, j=len-1; i<=j; i++, j--)
				s[i] = s[j] = '0';
		}
		puts(s);
	}
	
	return 0;
}
