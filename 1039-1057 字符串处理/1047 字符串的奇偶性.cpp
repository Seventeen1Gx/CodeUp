#include <stdio.h>

int
main()
{
	char num[32];
	int cnt;
	
	gets(num);
	while ( num[0] != '#' ) {
		cnt = 0;
		
		int i;
		//����һ�飬ͳ��1�ĸ���
		for (i=0; num[i] != '\0'; i++) {	 
			if ( num[i] == '1' )
				cnt++;
		}
		//��ͬ������в�ͬ���� 
		if ( num[i-1] == 'e' ) {
			if ( cnt%2 == 0 )
				num[i-1] = '0';
			else
				num[i-1] = '1';
		} else {
			if ( cnt%2 == 0 )
				num[i-1] = '1';
			else
				num[i-1] = '0';
		}
		//��� 
		puts(num);
		//������һ������ 
		gets(num);
	}
	return 0;
}
