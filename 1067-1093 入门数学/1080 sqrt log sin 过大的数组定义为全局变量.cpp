#include <stdio.h>
#include <math.h>

void Fun(int a[], int n)
{
	a[0] = 1;
	for (int i=1; i<n; i++) {
		a[i] = (a[int(i-sqrt(i))] + a[int(log(i))] + a[int(i*sin(i)*sin(i))]) % 1000000;
	}
}

int a[1000001];
int main()
{
	int n;
	scanf("%d", &n);
	
	Fun(a, 1000001);
	
	while (n!=-1) {
		
		printf("%d\n", a[n]);
		scanf("%d", &n);
	} 
	return 0;
}

