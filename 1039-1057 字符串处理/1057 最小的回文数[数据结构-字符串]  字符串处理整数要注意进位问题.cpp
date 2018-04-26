/*
注意 用字符串处理整数时候进位问题   '9' + 1 不会帮你进位
此题特殊在  3993  9999 这样的数 
*/
#include <stdio.h>
#include <string.h>

const int MAXSIZE = 10000;

//int Judge(char s[], int n)
//{
//	for (int i=0, j=n-1; i<j; i++, j--)
//		if ( s[i] != s[j] )
//			return 0;
//	return 1;
//}

int main()
{
	char s[MAXSIZE+2];
	
	while ( gets(s) ) {
		int len = strlen(s);
		
		int i, j;
		int flag = 1;
		for (i=0, j=len-1; i<j; i++, j--) {
			if (s[i] < s[j])
				flag = 1;                    //flag保存的是最靠中间的不等状态 
			else if (s[i] > s[j])
				flag = 0;
			s[j] = s[i];
		} 
		
		int flag2 = 0;
		
		if ( flag ) {          //回文或者前半截小 
			while (1) {
				if (i == j) {
					s[i]++;
					if ( s[i] <= '9' )
						break;
					s[i] = '0';
					i++;
					j--;
				} else {
					s[i]++;
					s[j]++;
					if ( s[i] <= '9' )
						break;
					s[i] = s[j] = '0';
					i++;
					j--;
				}
				if (j < 0 ) {
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
