#include <stdio.h>

int relative_molecular_mass(char c, int n)
{
	int mass = 0;
	switch (c) {
		case 'H' :  mass = 1  * n;  break;
		case 'C' :  mass = 12 * n;  break;
		case 'N' :  mass = 14 * n;  break;
		case 'O' :  mass = 16 * n;  break;
		case 'F' :  mass = 19 * n;  break;
		case 'P' :  mass = 31 * n;  break;
		case 'S' :  mass = 32 * n;  break;
		case 'K' :  mass = 39 * n;  break;
	}
	return mass;
}

int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	
	char a[100];
	
	while (n--) {
		gets(a);
		
		int g=0;
		for (int i=0; a[i] != '\0'; i++) {
			if ( a[i] >= 'A' && a[i] <= 'Z' )
				g += relative_molecular_mass( a[i], 1 );
			else
				g += relative_molecular_mass( a[i-1], a[i] - 1 - '0');
		}
		printf("%d\n", g);
	}
	
	return 0;
}
