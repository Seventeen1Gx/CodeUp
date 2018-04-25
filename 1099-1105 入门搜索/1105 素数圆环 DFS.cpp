#include <stdio.h>
#include <string.h>
#include <math.h>

int tag[20];
int loop[20];

int isPrime(int n)
{
	if (n%2 == 0)
		return 0;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

void show(int n)
{
	for (int i = 1; i <= n; i++) {
		if (i==1)
			printf("%d", loop[i]);
		else
			printf(" %d", loop[i]);
	}
	printf("\n");
}

void set(int k, int n)      //放第k个，共要放n个，都从1开始数 
{
	if (k < n) {
		for (int i = 2; i <= n; i++) {
			if (tag[i] == 0 && isPrime(i+loop[k-1])) {
				 tag[i] = 1;
				 loop[k] = i;
				 set(k+1, n);
				 tag[i] = 0;       //注意恢复 
			}
		}
	} else if (k == n) {
		for (int i = 2; i <= n; i++) {
			if (tag[i] == 0 && isPrime(i+loop[k-1]) && isPrime(i+loop[1])) {
				 tag[i] = 1;
				 loop[k] = i;
				 show(n);
				 tag[i] = 0;      //注意恢复 
			}
		}
	} 
}



int main()
{
	
	int i = 0;
	int n;
	
	while (~scanf("%d", &n)) {
		i++;
		memset(tag, 0, sizeof(tag));
		memset(loop, 0, sizeof(loop));
		
		printf("Case %d:\n", i);
		loop[1] = 1;
		tag[1] = 1;
		set(2, n);
		printf("\n");
	}
	
	return 0;
}
