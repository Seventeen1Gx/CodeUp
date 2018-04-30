#include <stdio.h>
#include <string.h>
//动态规划法
//有如下情形：
//1. 当i = j，tag[i][j] = true（奇数长度子串的基准情形）
//2. 当i + 1 = j && s[i] = s[j]，tag[i][j] = ture；当i + 1 = j && s[i] != s[j]，tag[i][j] = false（偶数长度子串的基准情形）
//3. 除上两种情况之外，当s[i] = s[j] && tag[i+1][j-1] = true，tag[i][j] = true，否则tag[i][j] = false（递推情形）


int main()
{
	char a[5001];
	bool tag[5001][5001];
	
	while ( gets(a) ) {
		int len = strlen(a);
		
		//tag[j][j+i]是按对角线遍历的 
		//i表示正对角线标号，j表示行号 
		for (int i = 0; i < len; i++) 
			for (int j = 0; j < len && j + i < len; j++) {
				if (i == 0)    					//正对角线，对应情形一 
					tag[j][j + i] = true;
				else if (i == 1) {				//次正对角线，对应情形二			
					if ( a[j] == a[j + i] )
						tag[j][j + i] = true;
					else
						tag[j][j + i] = false;
				} else {						//第三种情况 
					if ( a[j] == a[j+i] && tag[j+1][j+i-1] ) //在回文串基础上两边加相同字符，那也是一个回文串 
						tag[j][j+i] = true;
					else
						tag[j][j+i] = false;
				} 
			}
			
			//遍历矩阵tag，统计回文子串数目
			int cnt = 0;
			for (int i = 0; i < len; i++)
				for (int j = i; j < len; j++)
					if (tag[i][j])
						cnt++;
						
			printf("%d\n", cnt);
	}
}
