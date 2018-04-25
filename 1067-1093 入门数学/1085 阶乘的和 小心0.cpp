#include <stdio.h>

int a[10] = {1, 1};

int f(int n, int size)
{
	if (size<0)
		return 0;
	int pos; 
	for (int i=size; i>=0; i--)
		if ( a[i]==n )
			return 1;
		else if ( a[i]<n ) {
			pos = i;
			break;
		}
		
	while (pos>=0) {
		if ( f(n-a[pos], pos-1) )
			return 1;
		else
			pos--;
	}
	return 0;
}


int main()
{
	int n;
	
	for (int i=2; i<10; i++)
		a[i] = a[i-1] * i;
		
	scanf("%d", &n);
	
	while (n>=0) {
		if (n==0) {
			printf("NO\n");
			scanf("%d", &n);
			continue;
		} 
		int flag = f(n, 9);
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
		scanf("%d", &n);
	}
	
	return 0;
}
