#include <stdio.h>

int bigmod(char s[], int n)
{
	int m=0;
    for(int i=0; s[i]!='\0'; i++){
        m = m*10 + s[i] - '0';
        m %= n;
    }
    return m;
}

int main()
{
	int n;
	char s[1001];
	
	while ( ~scanf("%d", &n) ) {
		if (n==0) {
			printf("%d\n", 0);
			continue;
		}
		int t=n;
		int cnt = 0;
		while ( t!=0 ) {
			t /= 10;
			cnt ++;
		}
		
		int i;
		for (i=0; i<cnt; i++) 
			s[i] = '1';
		s[i] = '\0';
		while (1) {
			if ( bigmod(s, n) == 0 )
				break;
			s[i] = '1';
			i++;
			s[i] = '\0';
			cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
