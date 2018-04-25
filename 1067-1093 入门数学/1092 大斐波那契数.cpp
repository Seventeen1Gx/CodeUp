#include <stdio.h>
#include <string.h>

void add(char a[], char b[]);

void f(char result[], int n);

int main()
{
	int n;
	char result[1001];
	
	while ( ~scanf("%d", &n) ) {
		f(result, n);
		printf("%s\n", result);
	}
	return 0;
}

void add(char a[], char b[])
{
	char c[1001];
	
	int carry = 0;
	int i, j, k;
	for (k=0, i=strlen(a)-1, j=strlen(b)-1; i>=0 && j>=0; i--, j--) {
		c[k] = a[i] + b[j] - '0' + carry;
		if ( c[k] > '9' ) {
			c[k] = c[k] - 10;
			carry = 1;
		}  else
			carry = 0;
		k++;
	}
	
	while (i>=0) {
		c[k] = a[i] + carry;
		if ( c[k] > '9' ) {
			c[k] = c[k] - 10;
			carry = 1;
		}  else
			carry = 0;
		k++;
		i--;
	}
	while (j>=0) {
		c[k] = b[j] + carry;
		if ( c[k] > '9' ) {
			c[k] = c[k] - 10;
			carry = 1;
		}  else
			carry = 0;
		j--;
		k++;
	}
	if (carry) {
		c[k] = '0' + carry;
		c[k+1] = '\0';
	} else
		c[k] = '\0';
		
	for ( i=0; b[i]!='\0'; i++ ) {
		a[i] = b[i];
	}
	a[i] = '\0';
	
	for ( i=strlen(c)-1, j=0; i>=0; i--, j++ ) {
		b[j] = c[i];
	}
	b[j] = '\0';
}

void f(char result[], int n)
{
		result[0] = '1';
		result[1] = '\0';
	if (n == 1 || n == 2) {
		return;
	} else {
		int i = 2;
		char pre[1001] = "1";
		while ( i<n ) {
			add(pre, result);
			i++;
		}
	}	
}
