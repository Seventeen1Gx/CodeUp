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
