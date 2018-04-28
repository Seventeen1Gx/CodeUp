#include <stdio.h>

int main()
{
	char c1, c2; 
	char s[201];
	int cnt, sum;
	
	while ( (c1=getchar()) != EOF ) {
		//C1和C2分别存取所指定字符的大写和小写形式 
		if ( c1>='a' && c1<='z')
			c2 = c1 - 'a' + 'A';
		else
			c2 = c1 - 'A' + 'a';
		//吸收空格 
		getchar();
		scanf("%s", s);
		//吸收换行 
		getchar();
		
		//cnt为指定单词出现次数，sum为单词的全部字母个数 
		cnt = sum = 0;
		for (int i=0; s[i] != '\0'; i++) {
			//不区分大小写的统计 
			if ( s[i] == c1 || s[i] == c2 )
				cnt++;
			sum++;
		}
		printf("%.5f\n", 1.0*cnt/sum);
	} 
}
