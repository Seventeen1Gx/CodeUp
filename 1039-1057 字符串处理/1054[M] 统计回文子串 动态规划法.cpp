#include <stdio.h>
#include <string.h>
//��̬�滮��
//���������Σ�
//1. ��i = j��tag[i][j] = true�����������Ӵ��Ļ�׼���Σ�
//2. ��i + 1 = j && s[i] = s[j]��tag[i][j] = ture����i + 1 = j && s[i] != s[j]��tag[i][j] = false��ż�������Ӵ��Ļ�׼���Σ�
//3. �����������֮�⣬��s[i] = s[j] && tag[i+1][j-1] = true��tag[i][j] = true������tag[i][j] = false���������Σ�


int main()
{
	char a[5001];
	bool tag[5001][5001];
	
	while ( gets(a) ) {
		int len = strlen(a);
		
		
		//tag[j][j+i]�ǰ��Խ��߱����� 
		//i��ʾ���Խ��߱�ţ�j��ʾ�к� 
		for (int i = 0; i < len; i++) 
			for (int j = 0; j < len && j + i < len; j++) {
				if (i == 0)    					//���Խ��ߣ���Ӧ����һ 
					tag[j][j + i] = true;
				else if (i == 1) {				//�����Խ��ߣ���Ӧ���ζ�			
					if ( a[j] == a[j + i] )
						tag[j][j + i] = true;
					else
						tag[j][j + i] = false;
				} 
			} 
		
		for (int i = 0; i < len; i++)
			for (int j = i; j < len; j++) {
				if ( i == j )
					tag[i][j] = true;
				else if ( i == j - 1 && s[i] == s[j] )
					tag[i][j] = true;
				else if ( i == j - 1 && s[i] != s[j] )
					tag[i][j] = false;
				else if ( s[i] == s[j] && tag[i+1][j-1] )
					tag[i][j] = true;
				else
					tag[i][j]
				
			}  
	}
} 
