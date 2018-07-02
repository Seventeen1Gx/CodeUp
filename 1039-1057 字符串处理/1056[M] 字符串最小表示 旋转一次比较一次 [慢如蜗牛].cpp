#include <stdio.h>
#include <string.h>

//����һλ
void rotate(char s[], int n)
{
	char t = s[0];
	for (int i = 1; i < n; i++) {
		s[i-1] = s[i];
	}
	s[n-1] = t;
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
		
		//��ʼ��"��̨"������ԭ�ַ��� 
		strcpy(min, s);
		minpos = 0;				//��¼��С�ַ������ֵ�λ���±� 
		
		 
		for (int i = 0; i < n - 1; i++) {		
			//ÿ��ѭ������һλ
			rotate(s, n);
			if ( strcmp(s, min) < 0 ) {
				strcpy(min, s);
				minpos = i + 1;
			}
		}
		printf("%d\n", minpos); 
		 
	}
	
	return 0;
}
