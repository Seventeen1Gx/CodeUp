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
				} else {						//��������� 
					if ( a[j] == a[j+i] && tag[j+1][j+i-1] ) //�ڻ��Ĵ����������߼���ͬ�ַ�����Ҳ��һ�����Ĵ� 
						tag[j][j+i] = true;
					else
						tag[j][j+i] = false;
				} 
			}
			
			//��������tag��ͳ�ƻ����Ӵ���Ŀ
			int cnt = 0;
			for (int i = 0; i < len; i++)
				for (int j = i; j < len; j++)
					if (tag[i][j])
						cnt++;
						
			printf("%d\n", cnt);
	}
}
