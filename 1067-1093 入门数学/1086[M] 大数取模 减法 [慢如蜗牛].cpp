#include <stdio.h>
#include <string.h>
//��������õķ�����һ�δ���������ֱ���������������� 

//����a������ȥ����b���� 
void minus(char a[], char b[], int len1, int len2);

int main()
{
	char a[1001], b[6];
	
	while ( scanf("%s %s", a, b) != EOF ) {
		int len1 = strlen(a);
		int len2 = strlen(b);
		
		int i=0;								//iһֱָ�����ֵĿ�ʼ 
		while ( a[i] == '0' ) i++;				//����ǰ��0 
		
		while ( len1 - i > len2 ) {
			minus(a, b, len1-1, len2-1);
			i=0;
			while ( a[i] == '0' ) i++;			//����ǰ��0 
		}
		
		//��ʱa��b������ͬ 
		int j=0, flag = 0;
		while ( i<len1 ) {						//����λ��ʼ�Ƚ�a��b�Ĵ�С 
			if ( a[i]<b[j] ) {					//˵��b��a�Ѿ������� 
				flag = 1;
				break;
			} else if ( a[i]>b[j] ) {			//˵��a�󣬻�Ҫ��һ�� 
				flag = 0;
				break;	
			}
		}
		
		if (!flag)
			minus(a, b, len1-1, len2-1);
		
		int flag2 = 1;
		for (i=0; i<len1; i++) {
			if( a[i] != '0' )					//����ǰ��0 
				flag2 = 0;
			if ( flag2 )
				continue;
			printf("%c", a[i]);
		}
		printf("\n");
	}
	return 0;
}

void minus(char a[], char b[], int i, int j)
{
	while (j>=0) {							//��ĩλ��ʼ������� 
		int t = i;
		if ( a[t] < b[j] ) {				//��һλ����������Ҫ��λ 
			while ( a[t-1] == '0' ) {      	//��ǰ��λ 
				a[t-1] = '9';
				t--;
			}
			a[t-1] -= 1;
			a[i] += 10;
		}
		a[i] = a[i] - b[j] + '0';
		i--;
		j--;		
	}
}
