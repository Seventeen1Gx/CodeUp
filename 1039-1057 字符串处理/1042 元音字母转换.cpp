#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();		//吸收缓存区换行符 
	char s[51];
	
	while (t--) {
		gets(s);
		for (int i=0; s[i] != '\0'; i++) {
			switch (s[i]) {
				//元音小写字母转变为大写 
				case 'a' : s[i] = 'A'; break;
				case 'e' : s[i] = 'E'; break;
				case 'i' : s[i] = 'I'; break;
				case 'o' : s[i] = 'O'; break;
				case 'u' : s[i] = 'U'; break;
				//元音大写字母不处理 
				case 'A' :
				case 'E' :
				case 'I' :
				case 'O' :
				case 'U' :			   break;
				//非元音字母 
				default :
					//若大写就转换为小写 
					if ( s[i] >= 'A' && s[i] <= 'Z' ) 
						s[i] = s[i] -'A' + 'a';
			}
		}
		puts(s);
	}
}
