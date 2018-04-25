#include <stdio.h>
#include <string.h>

void add(char a[], char b[]);

int main()
{
	int n;
	char total[110];
	char num[101];
	
	scanf("%d", &n);
	getchar();
	while (n--) {
		
		total[0] = '\0';
		
		gets(num);
		while ( num[0]!='0' ) {
			add(total, num);
			gets(num);
		}
		
		for (int i=strlen(total)-1; i>=0; i--)
			printf("%c", total[i]);
		printf("\n\n");
	}
	return 0;
}

void add(char a[], char b[])
{
	int i, j;
	int carry=0;
	
	int flag = 0;
	for (i=0, j=strlen(b)-1; j>=0; i++, j--) {
		if ( a[i] == '\0' )                      //  b比a长时 
			flag = 1;
		if ( flag )	
		{
			a[i] = b[j] + carry;
			if ( a[i] > '9' ) {
				a[i] = a[i] - 10;
				carry = 1;
			} else
				carry = 0;
		} else {
			a[i] = a[i] + b[j] - '0' + carry;
			if ( a[i] > '9' ) {
				a[i] = a[i] - 10;
				carry = 1;
			}  else
				carry = 0;
		}
	}
	
	if ( !flag ) {							// a比b长 
		while ( a[i] ) {
			a[i] = a[i] + carry;
			if ( a[i] > '9' ) {
				a[i] = a[i] - 10;
				carry = 1;
			} else
				carry = 0;
			i++;
		}
	} 
	
	if ( carry ) {
		a[i] = '0' + carry;
		a[i+1] = '\0';
	} else
		a[i] = '\0';
		
}
