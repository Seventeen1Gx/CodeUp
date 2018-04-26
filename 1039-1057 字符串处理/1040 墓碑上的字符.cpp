#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char s1[50], s2[50], s3[100];
	int len, i, j;
	
	getchar();
	
	while (n--) {
		gets(s1);
		gets(s2);
		len = strlen(s1);
		
		for (i=0; i<len/2; i++)
			s3[i] = s1[i];
	
		for (j=0; s2[j] != '\0'; j++)
			s3[i+j] = s2[j];
			
		for ( ; s1[i] != '\0'; i++)
			s3[i+j] = s1[i];
		
		s3[i+j] = '\0';
		puts(s3);
	}
}
