#include <stdio.h>
#include <math.h>

int main()
{
	int vul, d, time, i;
	
	while ( scanf("%d %d", &vul, &d) != EOF ) {
		i = 1;				//第i次，落下i滴 
		time = 0;
		while ( vul > 0 ) {
			if ( vul - i * d > 0 ) {	//若滴完i滴还有剩余 
				time += i+1;			//加i秒和停一秒 
				vul -= i*d;				//还剩下液体体积 
			} else {					//已不够i滴 
				time += ceil(1.0*vul/d);	//剩余i滴加i秒，不足一滴取，故向上取整 
				break;
			}
			i++;	
		}
		printf("%d\n", time);
	}
	return 0; 
}
