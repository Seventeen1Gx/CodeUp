#include <stdio.h>
#include <string.h>

int main()
{
	char a[5001];
	
	while ( gets(a) ) {
		
		int len = strlen(a);
		int cnt = 0;
		
		for (int i=0; a[i] != '\0'; i++) {                    //�������Ӵ� 
			for (int j=0; i-j >= 0 && i+j < len; j++) {
				if ( a[i-j] == a[i+j] )
					cnt ++;
				else 
					break;
			}
		}
		for (int i=0; a[i] != '\0'; i++) {
			for (int j=0; i-j >= 0 && i+j+1 < len; j++) {	   //ż�����Ӵ� 
				if ( a[i-j] == a[i+j+1] )
					cnt ++;
				else 
					break;
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
