#include <stdio.h>
#include <string.h>
//考虑回文串的对称性 
//对于连续子串，采用确定中心，往两边延伸的方法进行判断 

int main()
{
	char a[5001];
	
	while ( gets(a) ) {
		
		int len = strlen(a);
		int cnt = 0;
		
		//长度为奇数的连续子串
		for (int i=0; a[i] != '\0'; i++) { 					//确定子串中心        
			for (int j=0; i-j >= 0 && i+j < len; j++) {		//从中心向两边延伸 
				if ( a[i-j] == a[i+j] )						//对称相等，子串数目加一 
					cnt ++;
				else 										//遇见不相等的，换下一个中心 
					break;
			}
		}
		//长度为偶数的连续子串 
		for (int i=0; a[i] != '\0'; i++) {
			for (int j=0; i-j >= 0 && i+j+1 < len; j++) { 
				if ( a[i-j] == a[i+j+1] )					//对称相等，子串数目加一
					cnt ++;
				else										//遇见不相等的，换下一个中心 
					break;							
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
