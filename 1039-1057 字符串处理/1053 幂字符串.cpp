#include <stdio.h>
#include <string.h>

int main()
{
	char s[101];
	
	while ( gets(s) ) {
		//ֻ��"."������Ż��˳���ע��".ab.cd"�ⲻӦ���˳� 
		if ( s[1] == '\0'  && s[0] == '.')
			break;
			
		int len1 = strlen(s);					//�󴮳��� 
		int len2;								//С������ 
		for (int n = len1; n > 0; n--) {		//n�Ӵ�С��ʼ��̽ 
			if ( len1 % n == 0 ) {				//����������� len1 = len2 * n 
				len2 =  len1 / n;
				//�ÿ�ͷ��Ϊlen2��С��������С���Ƚϣ������±��ϵ 
				int i;
				for (i = 0; i < len2; i++) {
					for (int j = 1; j < n; j++) {
						if (s[i] != s[i + len2 * j])
							goto LOOP_END;
					}
				}
				LOOP_END:
					if (i == len2) {
						printf("%d\n", n);
						break;
					}
			}
							
		}	
	}
	
	return 0;
} 
