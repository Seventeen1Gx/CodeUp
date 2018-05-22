#include <stdio.h>

int main()
{
	int n;
	
	while ( scanf("%d", &n) == 1 ) {
		int cnt=0;
		//three始终保存3的倍数，five始终保存5的倍数
		//美丽数是从小到大依次寻找的 
		int three = 3, five = 5;
		
		while (1) {
			//考虑three和five中的较小数 
			if( three<five ) {					//three较小 
				cnt++;							//three是第cnt个美丽数 
				if(cnt==n) { 
					printf("%d\n", three);
					break;
				}
				three += 3;						//较小的three增加到下一个3的倍数 
			} else if ( three>five ) {							//five较小 
				cnt++;							//five是第cnt个美丽数
				if(cnt==n) {
					printf("%d\n", five);
					break;
				}
				five += 5;						//较小的five增加到下一个5的倍数 
			} else {							//两者相等时 
				cnt++;
				if (cnt==n) {
					printf("%d\n", three);
					break;
				}
				three += 3;						//两者都增加到下一个数 
				five += 5;
			}
		}
	}
	
	return 0;
}
