#include <stdio.h>

int main()
{
	char gift[1000];
	
	
	while ( gets(gift) ) {
		int i = 0;
		int index = 0;
		while ( gift[i] != '\0' ) {		//�������ұ����ַ� 
			if ( gift[i] == '(' )		//����'('������+1 
				index++;
			else if ( gift[i] == ')' )	//����')'������-1 
				index--;
			else						//����'B',���õ�����˳�ѭ�� 
				break;
			i++;
		}
		printf("%d\n", index);
	}
	return 0;
}
