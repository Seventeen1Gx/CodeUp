#include <stdio.h>
#include <string.h>

//��ת�ַ���a��n��m�Ĳ��� 
void reverse(char a[], int n, int m)
{
	char t;
	while ( n<m ) {
		t = a[n];
		a[n] = a[m];
		a[m] = t;
		n++;
		m--;		
	}
}

//��ת�ַ���a 
void rotate(char a[], int n, int p)
{
	reverse(a, 0, p);				//��ת0��p 
	reverse(a, p+1, n-1);			//��תp+1��n-1 
	reverse(a, 0, n-1);				//��ת�����ַ��� 
}

int main()
{
	int t, n, minpos;
	char s[100001], min[100001];
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%s", s);
		getchar();					//���ջ��������з�
		
		//��ʼ��"��̨" 
		strcpy(min, s);
		minpos = 0;
		
		 
		for (int i = 0; i < n - 1; i++) {		//ѭ������nλ�õ�ԭ�������ﲻ������ 
			//ÿ��ѭ������һλ
			rotate(s, n, 0);
			if ( strcmp(s, min) < 0 ) {
				strcpy(min, s);
				minpos = i + 1;
			}
		}
		printf("%d\n", minpos); 
		 
	}
	
	return 0;
}
