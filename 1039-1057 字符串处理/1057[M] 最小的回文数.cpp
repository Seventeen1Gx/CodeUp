/*
����������  3993  9999 �������� 
*/
#include <stdio.h>
#include <string.h>

const int MAXSIZE = 10000;

int main()
{
	char s[MAXSIZE+2];			//+2�ǿ��ǵ�ĩβ\0�ͽ����λ����� 
	
	while ( gets(s) ) {
		int len = strlen(s);
		
		int i, j;
		//�����߾���Ͷ�䵽�Ұ��
		//flag��¼���û�������ԭ���Ĵ�С�仯���
		//1��ʾС�ڻ���ڣ�0��ʾ���� 
		int flag = 1; 
		for (i=0, j=len-1; i<j; i++, j--) {
			if (s[i] < s[j])
				flag = 1;                 
			else if (s[i] > s[j])
				flag = 0;
			s[j] = s[i];
		} 
		
		//����Ƿ�����һλ 
		int flag2 = 0;
		
		//flagΪ1��˵���µû�����С�ڻ����ԭ�� 
		if ( flag ) {           
			while (1) {
				if (i == j) {			//ֻ�账��һλ 
					s[i]++;
					if ( s[i] <= '9' )	//�޽�λ 
						break;
					s[i] = '0';
					i++;
					j--;
				} else {				//��Ҫ������λ 
					s[i]++;
					s[j]++;
					if ( s[i] <= '9' )	//�޽�λ 
						break;
					s[i] = s[j] = '0';
					i++;
					j--;
				}
				if (j < 0 ) {			//����һλ 
					flag2 = 1;
					break;
				}
			}
		}
		
		if ( flag2 ) {
			s[0] = s[len] = '1';
			s[len+1] = '\0';
			for (i=1, j=len-1; i<=j; i++, j--)
				s[i] = s[j] = '0';
		}
		puts(s);
	}
	
	return 0;
}
