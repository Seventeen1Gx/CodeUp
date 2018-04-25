#include <stdio.h>
#include <string.h> 

int 
main()
{
	int t;
	scanf("%d", &t);
	char num[100];
	int n;
	
	while (t--) {
		memset(num, '0', sizeof(num));
		scanf("%s%d", num, &n);
		num[strlen(num)] = '\0';
		int i;
		i = 0;
		while ( num[i] != '.' )
			i++;
		printf("%c\n", num[i+n]);
	}	
	
	return 0;
}
