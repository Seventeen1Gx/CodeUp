#include <stdio.h>
//����Ӵ��жϷ�

//�ж�start��end�����Ƿ�Ϊ�����ַ��� 
bool Judeg(char s[], int start, int end)
{
	while (start < end) {
		if (s[start] != s[end])
			return false;
		start++;
		end--;
	}
	return true;
}

int main()
{
	char a[5001];
	
	while ( gets(a) ) {
		int cnt = 0;
		
		//����Ӵ����ٶ����ж� 
		for (int i = 0; a[i] != '\0'; i++)
			for (int j = i; a[j] != '\0'; j++)
				if (Judeg(a, i, j))
					cnt++;
					
		printf("%d\n", cnt); 
	}
} 
