#include <stdio.h>
#include <string.h>
//���ǻ��Ĵ��ĶԳ��� 
//���������Ӵ�������ȷ�����ģ�����������ķ��������ж� 

int main()
{
	char a[5001];
	
	while ( gets(a) ) {
		
		int len = strlen(a);
		int cnt = 0;
		
		//����Ϊ�����������Ӵ�
		for (int i=0; a[i] != '\0'; i++) { 					//ȷ���Ӵ�����        
			for (int j=0; i-j >= 0 && i+j < len; j++) {		//���������������� 
				if ( a[i-j] == a[i+j] )						//�Գ���ȣ��Ӵ���Ŀ��һ 
					cnt ++;
				else 										//��������ȵģ�����һ������ 
					break;
			}
		}
		//����Ϊż���������Ӵ� 
		for (int i=0; a[i] != '\0'; i++) {
			for (int j=0; i-j >= 0 && i+j+1 < len; j++) { 
				if ( a[i-j] == a[i+j+1] )					//�Գ���ȣ��Ӵ���Ŀ��һ
					cnt ++;
				else										//��������ȵģ�����һ������ 
					break;							
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
