#include <stdio.h>
#include <ctype.h> 
#define IN 1
#define OUT 0 

int main()
{
	int t;
	scanf("%d", &t);
	
	char s1[200], s2[10]; 
	int state, i, j;
	
	getchar();				//吸收缓存区中的换行符 
	while (t--) {
		//gets()以回车符为结束标志，将一行读入数组s1中，并以\0结尾，丢弃行末换行符
		gets(s1);			 
		state = OUT;
		for (i=j=0; s1[i] != '\0'; i++) {				//遍历s1数组 
			if ( state == OUT && isalpha(s1[i]) ) {		//从单词外到单词内，说明s1[i]为单词首字母 
				state = IN;
				if ( s1[i] >= 'a' && s1[i] <= 'z' ) 	//若小写则转换为大写 
					s2[j] = s1[i] - 'a' + 'A';			//结果存于s2数组 
				else									//若大写无需处理 
					s2[j] = s1[i];
				j++;									//s2下标指针后移 
			} else if ( state == IN && !isalpha(s1[i]) ) {				//说明s[i]处于单词外 
				state = OUT;
			}
		}
		s2[j] = '\0';									//添加末尾标志 
		puts(s2);										//输出结果，末尾\0换成换行符 
	}
}
