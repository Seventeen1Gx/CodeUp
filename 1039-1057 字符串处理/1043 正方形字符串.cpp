#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
	
	while (n--) {
		scanf("%d", &m);
		//一行m个ACM，输出3*m行 
		for (int i=0; i<m*3; i++) {
			for(int j=0; j<m; j++) {
				printf("ACM");
			}
			printf("\n");
		}
	}
}
