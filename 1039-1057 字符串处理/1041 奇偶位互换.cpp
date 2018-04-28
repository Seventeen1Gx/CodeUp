#include <stdio.h>
//本题所说的奇偶位互换是邻位互换 

int main()
{
	char s[51], t;
	int c, i;
	scanf("%d", &c);
	getchar();			//吸收缓存区换行符 
	
	while (c--) {
		gets(s);
		//将偶数个字符的字符串两个字符作为一组处理
		for (i=0; s[i] != '\0'; i += 2) {
			//交换这一组两字符的位置 
			t = s[i];
			s[i] = s[i+1];
			s[i+1] = t;
		}
		puts(s);
	}
}
