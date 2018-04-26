#include <stdio.h>
#define IN 1
#define OUT 0

int acount(char c, int n)
{
	int a;
	switch (c) {
		case '0':	a = 0 * n;  break;
		case '1':	a = 1 * n;	break;
		case '2':	a = 2 * n;	break;
		case '3':	a = 3 * n;	break;
		case '4':	a = 4 * n;	break;
		case '5':	a = 5 * n;	break;
		case '6':	a = 6 * n;	break;
		case '7':	a = 7 * n;	break;
		case '8':	a = 8 * n;	break;
		case '9':	a = 9 * n;	break;
	}
	return a;
}

int num(char s[], int start, int end)
{
	int n = 0;
	int weight = 1;
	
	while ( start<=end ) {
		n += acount( s[end], weight);
		end--;
		weight *= 10;
	}
	return n;
}

void sort(int a[], int n)
{	
	int t;
	int flag = 1;
	for (int i=0; i<n && flag; i++) {
		flag = 0;
		for (int j=0; j<n-i-1; j++) {
			if ( a[j]>a[j+1] ) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 1;
			}
		}
	}
		
}

int main()
{
	char s[1001];
	int a[1001];
	
	while ( gets(s) != NULL ) {
		
		int i;
		int n=0;
		int start, end;
		int state = OUT;
		for (i=0; s[i] != '\0'; i++) {
			if ( state==OUT && s[i] != '5' ) {
				state = IN;
				start = i;
			}
			if ( state==IN && s[i] == '5' ) {
				state = OUT;
				end = i-1;
				a[n] = num(s, start, end);
				n++;
			}
		}
		
		if ( s[i-1] != '5' ) {
			end = i-1;
			a[n] = num(s, start, end);
			n++;
		}
	
		sort(a, n);
		
		for (int i=0; i<n; i++)
			if( i==0 )
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		 
		printf("\n");
		
	}
	return 0;
}
