#include <stdio.h>

int
main()
{
	char num[32];
	int cnt;
	
	gets(num);
	while ( num[0] != '#' ) {
		cnt = 0;
		
		int i;
		//遍历一遍，统计1的个数
		for (i=0; num[i] != '\0'; i++) {	 
			if ( num[i] == '1' )
				cnt++;
		}
		//不同情况进行不同处理 
		if ( num[i-1] == 'e' ) {
			if ( cnt%2 == 0 )
				num[i-1] = '0';
			else
				num[i-1] = '1';
		} else {
			if ( cnt%2 == 0 )
				num[i-1] = '1';
			else
				num[i-1] = '0';
		}
		//输出 
		puts(num);
		//读入下一组数据 
		gets(num);
	}
	return 0;
}
