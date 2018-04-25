#include <stdio.h>

int main()
{
	char gift[1000];
	
	
	while ( gets(gift) ) {
		int i = 0;
		int index = 0;
		while ( gift[i] != '\0' ) {
			if ( gift[i] == '(' )
				index++;
			else if ( gift[i] == ')' )
				index--;
			else
				break;
			i++;
		}
		printf("%d\n", index);
	}
	return 0;
}
