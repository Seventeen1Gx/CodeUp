#include <stdio.h>

//判断a，b的最大公约数 
int Gcd(int a, int b)
{
	int c;
	while ( b>0 ) {
		c = a%b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int cn, n, gcd;
	scanf("%d", &cn);
	int tag[32768];
	
	while (cn--) {
		scanf("%d", &n);
		int cnt = 0;
		
		//初始化标记数组，0表示还未讨论 
		for (int i=1; i<n; i++)
			tag[i] = 0;
		//从1开始到n-1，判断与n是否互质 
		for (int i=1; i<n; i++) {
			if(tag[i])
				continue;
			gcd = Gcd(n, i);
			if(gcd==1)			//若最大公约数为1，则i与n互质 
				cnt++;
			else {				//i与n不互质，则i的倍数与n也不互质 
				for(int j=1; j*i<n; j++)		//对i的倍数可以不再讨论 
					tag[i*j] = 1;
			}	
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
