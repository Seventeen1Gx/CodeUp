#include <stdio.h>


//�ַ��任 
char revert(int n) {
	int c;
	switch (n) {
		case 1 :  c = 'A';  break;
		case 2 :  c = 'B';  break;
		case 3 :  c = 'C';  break;
		case 4 :  c = 'D';  break;
		case 5 :  c = 'E';  break;
		case 6 :  c = 'F';  break;
		case 7 :  c = 'G';  break;
		case 8 :  c = 'H';  break;
		case 9 :  c = 'I';  break;
		case 10 :  c = 'J';  break;
		case 11 :  c = 'K';  break;
		case 12 :  c = 'L';  break;
		case 13 :  c = 'M';  break;
		case 14 :  c = 'N';  break;
		case 15 :  c = 'O';  break;
		case 16 :  c = 'P';  break;
		case 17 :  c = 'Q';  break;
		case 18 :  c = 'R';  break;
		case 19 :  c = 'S';  break;
		case 20 :  c = 'T';  break;
		case 21 :  c = 'U';  break;
		case 22 :  c = 'V';  break;
		case 23 :  c = 'W';  break;
		case 24 :  c = 'X';  break;
		case 25 :  c = 'Y';  break;
		case 26 :  c = 'Z';  break;
	}
	return c;
}

int 
main ()
{
	int c;
	scanf("%d", &c);
	getchar();				//���ջ��������з� 
	
	char a[101];
	
	while (c--) {
		gets(a);
		
		int i=0, j=0;
		int n;
		
		//���������ַ��� 
		while ( a[i] != '\0' ) {
			if ( a[i] >= '0' && a[i] <= '9' ) {				//���������ַ� 
				if ( a[i+1] >= '0' && a[i+1] <= '9' ) {		//˵������λ���� 
					//������λ�����ַ���ת��Ϊ���� 
					n = (a[i] - '0') * 10 + a[i+1] - '0';
					//�������a�� 
					a[j] = revert(n);
					j++;
					//������λ
					i += 2;			 
				} else {			//˵����һλ���� 
					//����һλ�����ַ���ת��Ϊ���� 
					n = a[i] - '0';
					//�������a��
					a[j] = revert(n);
					j++;
					//����һλ 
					i++;
				}
			} else if ( a[i] == '#' ) {			//��ת��ո� 
				a[j] = ' ';
				j++;
				i++;
			} else								//����'-'���� 
				i++;
		}
		//��ӽ�β'\0' 
		a[j] = '\0';
		//������ 
		puts(a);		
	}
	
	return 0;
}
