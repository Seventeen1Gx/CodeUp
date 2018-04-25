#include <stdio.h>

void clear(int a[], int n)
{
	for (int i=0; i<n; i++)
		a[i] = 0;
}

int main()
{
	int father[21];
	int a, b, n;
	int cnt1, cnt2;
	
	while (scanf("%d", &n) != EOF)	{
		clear(father, 21);
		cnt1 = cnt2 = 0;
		for (int i=0; i<n; i++) {
			scanf("%d %d", &a, &b);
			father[a] = b;
		}
		
		a = 1;
		while ( father[a] ) {
			a = father[a];
			cnt1++;
		}
		a = 2;
		while ( father[a] ) {
			a = father[a];
			cnt2++;
		}
		
		if (cnt1>cnt2)
			printf("You are my elder\n");
		else if (cnt1<cnt2)
			printf("You are my younger\n");
		else
			printf("You are my brother\n");			
	}
	
	return 0;
}
