#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	char s[51];
	
	while (t--) {
		gets(s);
		for (int i=0; s[i] != '\0'; i++) {
			switch (s[i]) {
				case 'a' : s[i] = 'A'; break;
				case 'e' : s[i] = 'E'; break;
				case 'i' : s[i] = 'I'; break;
				case 'o' : s[i] = 'O'; break;
				case 'u' : s[i] = 'U'; break;
				case 'A' :
				case 'E' :
				case 'I' :
				case 'O' :
				case 'U' :			   break;
				default :
					if ( s[i] >= 'A' && s[i] <= 'Z' ) 
						s[i] = s[i] -'A' + 'a';
			}
		}
		puts(s);
	}
}
