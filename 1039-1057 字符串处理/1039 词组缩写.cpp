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
	
	getchar();				//���ջ������еĻ��з� 
	while (t--) {
		//gets()�Իس���Ϊ������־����һ�ж�������s1�У�����\0��β��������ĩ���з�
		gets(s1);			 
		state = OUT;
		for (i=j=0; s1[i] != '\0'; i++) {				//����s1���� 
			if ( state == OUT && isalpha(s1[i]) ) {		//�ӵ����⵽�����ڣ�˵��s1[i]Ϊ��������ĸ 
				state = IN;
				if ( s1[i] >= 'a' && s1[i] <= 'z' ) 	//��Сд��ת��Ϊ��д 
					s2[j] = s1[i] - 'a' + 'A';			//�������s2���� 
				else									//����д���账�� 
					s2[j] = s1[i];
				j++;									//s2�±�ָ����� 
			} else if ( state == IN && !isalpha(s1[i]) ) {				//˵��s[i]���ڵ����� 
				state = OUT;
			}
		}
		s2[j] = '\0';									//���ĩβ��־ 
		puts(s2);										//��������ĩβ\0���ɻ��з� 
	}
}
