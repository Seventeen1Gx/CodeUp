#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
	
	while (n--) {
		scanf("%d", &m);
		//һ��m��ACM�����3*m�� 
		for (int i=0; i<m*3; i++) {
			for(int j=0; j<m; j++) {
				printf("ACM");
			}
			printf("\n");
		}
	}
}
