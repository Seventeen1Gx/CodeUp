#include <stdio.h>

int main()
{
	char s[51], t;
	int c, i;
	scanf("%d", &c);
	getchar();
	
	while (c--) {
		gets(s);
		for (i=0; s[i] != '\0'; i += 2) {
			t = s[i];
			s[i] = s[i+1];
			s[i+1] = t;
		}
		puts(s);
	}
}
