#include <stdio.h>

int
main()
{
	char num[32];
	int cnt;
	
	gets(num);
	while ( num[0] != '#' ) {
		cnt = 0;
		int i;
		for (i=0; num[i] != '\0'; i++) {
			if ( num[i] == '1' )
				cnt++;
		} 
		if ( num[i-1] == 'e' && cnt%2 == 0)
			num[i-1] = '0';
		if ( num[i-1] == 'e' && cnt%2 == 1)
			num[i-1] = '1';
		if ( num[i-1] == 'o' && cnt%2 == 0)
			num[i-1] = '1';
		if ( num[i-1] == 'o' && cnt%2 == 1)
			num[i-1] = '0';
		puts(num);
		gets(num);
	}
	return 0;
}
