#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();		//���ջ��������з� 
	char s[51];
	
	while (t--) {
		gets(s);
		for (int i=0; s[i] != '\0'; i++) {
			switch (s[i]) {
				//Ԫ��Сд��ĸת��Ϊ��д 
				case 'a' : s[i] = 'A'; break;
				case 'e' : s[i] = 'E'; break;
				case 'i' : s[i] = 'I'; break;
				case 'o' : s[i] = 'O'; break;
				case 'u' : s[i] = 'U'; break;
				//Ԫ����д��ĸ������ 
				case 'A' :
				case 'E' :
				case 'I' :
				case 'O' :
				case 'U' :			   break;
				//��Ԫ����ĸ 
				default :
					//����д��ת��ΪСд 
					if ( s[i] >= 'A' && s[i] <= 'Z' ) 
						s[i] = s[i] -'A' + 'a';
			}
		}
		puts(s);
	}
}
