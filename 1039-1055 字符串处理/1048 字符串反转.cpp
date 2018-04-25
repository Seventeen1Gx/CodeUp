#include <stdio.h>
#define IN 1
#define OUT 0

void reverse(char s[], int front, int rear)
{
	char t;
	while ( front<rear ) {
		t = s[front];
		s[front] = s[rear];
		s[rear] = t;
		front ++;
		rear --;
	}
}

void processing(char s[])
{
	int i, start, end;
	int state = OUT;
	for (i=0; ; i++) {
		if( state==OUT && s[i] != ' ' ) {
			state = IN;
			start = i;
		} else if ( state==IN && (s[i] == ' ' || s[i] == '\0') ) {
			state = OUT;
			end = i - 1;
			reverse(s, start, end);
		}
		if( s[i] == '\0' )
			return;
	}
}

int
main()
{
	int t;
	scanf("%d", &t);
	char s[1001];
	
	getchar();
	while (t--) {
		gets(s);
		processing(s);
		puts(s);	
	}
	
	return 0;
}
