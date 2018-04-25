#include <stdio.h>

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
		
		for (int i=1; i<n; i++)
			tag[i] = 0;
		for (int i=1; i<n; i++) {
			if(tag[i])
				continue;
			gcd = Gcd(n, i);
			if(gcd==1)
				cnt++;
			else {
				for(int j=1; j*i<n; j++)
					tag[i*j] = 1;
			}	
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
