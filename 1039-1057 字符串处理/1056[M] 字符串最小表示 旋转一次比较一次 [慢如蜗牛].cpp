#include <stdio.h>
#include <string.h>

//反转字符串a从n到m的部分 
void reverse(char a[], int n, int m)
{
	char t;
	while ( n<m ) {
		t = a[n];
		a[n] = a[m];
		a[m] = t;
		n++;
		m--;		
	}
}

//旋转字符串a 
void rotate(char a[], int n, int p)
{
	reverse(a, 0, p);				//反转0到p 
	reverse(a, p+1, n-1);			//反转p+1到n-1 
	reverse(a, 0, n-1);				//反转整个字符串 
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
		
		//初始化"擂台" 
		strcpy(min, s);
		minpos = 0;
		
		 
		for (int i = 0; i < n - 1; i++) {		//循环左移n位得到原串，这里不考虑了 
			//每次循环左移一位
			rotate(s, n, 0);
			if ( strcmp(s, min) < 0 ) {
				strcpy(min, s);
				minpos = i + 1;
			}
		}
		printf("%d\n", minpos); 
		 
	}
	
	return 0;
}
