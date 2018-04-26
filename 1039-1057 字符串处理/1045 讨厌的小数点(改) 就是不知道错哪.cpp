#include <stdio.h>
#include <string.h>

int main()
{
	
	int t, n;
	scanf("%d", &t);
	char a[100];
	
	while (t--) {
		scanf("%s%d", a, &n); 
		a[strlen(a)] = '\0';
		
		int i=0;
		while (1) {
	 		if (a[i] == '.') {  
                printf("%c\n", a[i + n]);  
                break;  
            } 
            i++;
        }
	}
	return 0;
}
