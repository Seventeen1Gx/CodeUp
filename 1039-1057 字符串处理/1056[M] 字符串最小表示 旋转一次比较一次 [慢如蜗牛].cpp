#include <stdio.h>
#include <string.h>

//左移一位
void rotate(char s[], int n)
{
	char t = s[0];
	for (int i = 1; i < n; i++) {
		s[i-1] = s[i];
	}
	s[n-1] = t;
} 
 
int main()
{
	int t, n, minpos;
	char s[100001], min[100001];
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%s", s);
		getchar();					//吸收缓存区换行符
		
		//初始化"擂台"，放上原字符串 
		strcpy(min, s);
		minpos = 0;				//记录最小字符串出现的位置下标 
		
		 
		for (int i = 0; i < n - 1; i++) {		
			//每次循环左移一位
			rotate(s, n);
			if ( strcmp(s, min) < 0 ) {
				strcpy(min, s);
				minpos = i + 1;
			}
		}
		printf("%d\n", minpos); 
		 
	}
	
	return 0;
}
