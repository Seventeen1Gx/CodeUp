#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	char s1[50], s2[50], s3[100];
	int len, i, j;
	
	getchar();		//吸收缓存区换行符 
	
	while (n--) {
		gets(s1);		//读入第一个字符串 
		gets(s2);		//读入第二个字符串 
		len = strlen(s1);
		
		for (i=0; i<len/2; i++)				//第一个字符串前半段存入s3 
			s3[i] = s1[i];
	
		for (j=0; s2[j] != '\0'; j++)		//第二个字符串存入s3 
			s3[i+j] = s2[j];
			
		for ( ; s1[i] != '\0'; i++)			//第一个字符串后半段存入s3 
			s3[i+j] = s1[i];
		
		s3[i+j] = '\0';						//添加结尾\0 
		puts(s3);
	}
}
