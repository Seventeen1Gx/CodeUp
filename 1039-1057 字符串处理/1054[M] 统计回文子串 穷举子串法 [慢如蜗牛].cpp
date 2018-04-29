#include <stdio.h>
//穷举子串判断法

//判断start到end部分是否为回文字符串 
bool Judeg(char s[], int start, int end)
{
	while (start < end) {
		if (s[start] != s[end])
			return false;
		start++;
		end--;
	}
	return true;
}

int main()
{
	char a[5001];
	
	while ( gets(a) ) {
		int cnt = 0;
		
		//穷举子串，再对其判断 
		for (int i = 0; a[i] != '\0'; i++)
			for (int j = i; a[j] != '\0'; j++)
				if (Judeg(a, i, j))
					cnt++;
					
		printf("%d\n", cnt); 
	}
} 
