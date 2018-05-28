#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	
	while ( gets(s) ) {
		//只有"."的情况才会退出，注意".ab.cd"这不应该退出 
		if ( s[1] == '\0'  && s[0] == '.')
			break;
			
		int len1 = strlen(s);					//大串长度 
		int len2;								//小串长度 
		for (int n = len1; n > 0; n--) {		//n从大到小开始试探 
			if ( len1 % n == 0 ) {				//结果必须满足 len1 = len2 * n 
				len2 =  len1 / n;
				//用开头长为len2的小串与后面各小串比较，利用下标关系 
				int i;
				for (i = 0; i < len2; i++) {
					for (int j = 1; j < n; j++) {
						if (s[i] != s[i + len2 * j])
							goto LOOP_END;
					}
				}
				LOOP_END:
					if (i == len2) {
						printf("%d\n", n);
						break;
					}
			}
							
		}	
	}
	
	return 0;
} 
