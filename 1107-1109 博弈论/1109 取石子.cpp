#include <stdio.h>

int main()
{
	int c;
	scanf("%d", &c);
	
	int n, m;
	while (c--) {
		scanf("%d %d", &n, &m);
		int player = 0;
		int d = 0;
		while (1) {
			d += m;
			player++; 
			if (n <= d) {
				break;
			}
			d++;
			player++;
			if (n == d) {
				break;
			}
		}
		if (player%2 == 0)
			printf("second\n");
		else
			printf("first\n");
	}
}
