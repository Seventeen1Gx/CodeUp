#include <stdio.h>
#include <string.h>

void f(char pre[], int p1, char in[], int i1, char post[], int po1, int len);

int main()
{
	char a[100], b[100], e[100];
	
	while (~scanf("%s %s", a, b)) {
		getchar();
		
		int len = strlen(a);
		e[len] = '\0';
		f(a, 0, b, 0, e, 0, len);
		printf("%s\n", e);
	}
	
	return 0;
}

void f(char pre[], int p1, char in[], int i1, char post[], int po1, int len)
{
	if (len>0) {		
		post[po1+len-1] = pre[p1];
		
		int i;
		for (i=i1; in[i] != pre[p1]; i++) ;
		int len1 = i-i1;
		int len2 = i1+len-1-i;
		
		f(pre, p1+1, in, i1, post, po1, len1);
		f(pre, p1+len1+1, in, i+1, post, po1+len1, len2);
	}
}
