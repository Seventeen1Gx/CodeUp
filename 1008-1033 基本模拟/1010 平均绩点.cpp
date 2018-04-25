#include <stdio.h>
const int MAX = 1000;	//ÿ��¼����ַ������� 

//�������ж�ȡһ����s[]���ұ���ĩβ���з������ض�����ַ����������ַ�������lim
int getline(char s[], int lim)
{
	int c, i;
	
	for ( i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i )
		s[i] = c;
	
	if (c == '\n') {	//¼��ĩβ���з� 
		s[i] = c;
		i++;
	}
	s[i] = '\0';	//ĩβ��ӽ������ 
	
	return i;
}

int main()
{
	int len, n, flag;
	double sum;
	char line[MAX];
	
	//������line������ַ�������0�Ϳ�ʼ���� 
	while ( (len = getline(line, MAX)) > 0 ) {	 
		sum = 0;
		n = 0;
		flag = 1;
		for ( int i=0; i<len; ++i) {
			switch (line[i]) {
				case 'A':	sum += 4; n++; break;	//����ABCDF���ּܷ�����Ӧ��������Ŀ����һ 
				case 'B':	sum += 3; n++; break;
				case 'C':	sum += 2; n++; break;
				case 'D':	sum += 1; n++; break;
				case 'F':	sum += 0; n++; break;
				case ' ':	case '\n':	   break;	//���Ͽո���з��������� 
				default :	flag = 0;	   break;	//���ϲ��Ϸ����ַ�����־���� 
			}
			if (!flag)	//��־Ϊ0��˵��¼��Ƿ��ַ���ֱ�ӽ���ͳ��ѭ�� 
				break;
		}
		if (flag)
			printf("%.2f\n", sum/n);
		else
			printf("Unknown\n");
	}		
	
	return 0;
}
