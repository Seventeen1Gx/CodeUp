#include <stdio.h>
const int MAXLINE = 1000;

int getline(char s[], int lim)
{
	int c, i;
	
	for ( i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i )
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

int main()
{
	int len, n, flag;
	double sum;
	char line[MAXLINE];
	
	while ( (len = getline(line, MAXLINE)) > 0 ) {
		sum = 0;
		n = 0;
		flag = 1;
		for ( int i=0; i<len; ++i) {
			switch (line[i]) {
				case 'A':	sum += 4; n++; break;
				case 'B':	sum += 3; n++; break;
				case 'C':	sum += 2; n++; break;
				case 'D':	sum += 1; n++; break;
				case 'F':	sum += 0; n++; break;
				case ' ':	case '\n':	   break;
				default :	flag = 0;	   break;
			}
			if (!flag)
				break;
		}
		if (flag)
			printf("%.2f\n", sum/n);
		else
			printf("Unknown\n");
	}		
	
	return 0;
}
