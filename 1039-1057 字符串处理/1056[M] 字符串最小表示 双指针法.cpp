#include <stdio.h>

//返回最小字符串的起始下标 
int minString(char s[], int len);

int main()
{
	int t, n;
	char s[100001];
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%s", s);
		getchar();					//吸收缓存区换行符
	
		int minpos = minString(s, n);
		printf("%d\n", minpos);
	}
	return 0;
}


//i，j是相互比较的两串的开始下标
int minString(char s[], int len)
{
	int i, j, k;
	i = 0;
	j = 1;
	k = 0;
	while ( i < len && j < len ) {
		k = 0;
		while ( s[(i + k) % len] == s[(j + k) % len] && k < len ) 
			k++;		//找到 s[i + k] != s[j + k]，开始的时候k=0，就可以先找到s[i]==s[j] 
		
		if ( k == len ) {
			i > j ? i++ : j++;			//从i和j开始的字符串是相同的，排除掉大的那个
			continue;
		}					 
		
		if ( s[(i + k) % len] > s[(j + k) % len] ) 
		 	if (i + k + 1 > j) 
			 	i = i + k + 1;
		 	else 
			 	i = j + 1;
		else if (j + k + 1 > i) 
			j = j + k + 1;
		else
			j = i + 1; 
	}
	
	if (i < len)			//最后i和j有一个已经"走到头"了 
		return i;
	else 
		return j;
}
