#include <stdio.h>

//������С�ַ�������ʼ�±� 
int minString(char s[], int len);

int main()
{
	int t, n;
	char s[100001];
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%s", s);
		getchar();					//���ջ��������з�
	
		int minpos = minString(s, n);
		printf("%d\n", minpos);
	}
	return 0;
}


//i��j���໥�Ƚϵ������Ŀ�ʼ�±�
int minString(char s[], int len)
{
	int i, j, k;
	i = 0;
	j = 1;
	k = 0;
	while ( i < len && j < len ) {
		k = 0;
		while ( s[(i + k) % len] == s[(j + k) % len] && k < len ) 
			k++;		//�ҵ� s[i + k] != s[j + k]����ʼ��ʱ��k=0���Ϳ������ҵ�s[i]==s[j] 
		
		if ( k == len ) {
			i > j ? i++ : j++;			//��i��j��ʼ���ַ�������ͬ�ģ��ų�������Ǹ�
			continue;
		}					 
		
		if ( s[(i + k) % len] > s[(j + k) % len] ) 
		 	if (i + k + 1 > j) 
			 	i = i + k + 1;
		 	else 
			 	i = j + 1;
		else if (j + k + 1 > i) 
			j = j + k + 1;
		else
			j = i + 1; 
	}
	
	if (i < len)			//���i��j��һ���Ѿ�"�ߵ�ͷ"�� 
		return i;
	else 
		return j;
}
