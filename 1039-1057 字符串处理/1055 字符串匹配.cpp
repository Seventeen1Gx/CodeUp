#include <stdio.h>
#include <string.h>

//反转字符串a从n到m的部分 
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

//旋转字符串a 
void rotate(char a[], int n, int p)
{
	reverse(a, 0, p);				//反转0到p 
	reverse(a, p+1, n-1);			//反转p+1到n-1 
	reverse(a, 0, n-1);				//反转整个字符串 
}

//长度为n的字符串a，长度为m的字符串b，从start开始匹配，返回b在a中第一次出现的下标 
int match(char a[], int n, char b[], int m, int start)
{
	for (int i=start; i<n; i++) {			//从a的start处开始匹配 
		int j;
		for (j=0; j<m && i+j<n; j++) {		//从b的0处开始匹配 
			if ( a[i+j] != b[j] ) {
				break;	
			}
		}
		if (j==m)							//说明b在a中被找到 
			return i;
	}
	return -1;
}

int main()
{
	char a[1001], b[101];
	//为了不统计重复相同的匹配
	//标记主串的每个位置是否是匹配成功开始的位置
	//每个位置匹配成功的情况统计一次即可 
	int tag[1001];					 
	
	while ( gets(a) && gets(b) ) {
		
		int pos;
		int cnt = 0;
		int len1 = strlen(a);
		int len2 = strlen(b);
		
		//标记数组初始化为0 
		for (int i=0; i<len1; i++)
			tag[i] = 0;
		
		for (int i=0; i<len2;i++) {						//外循环是因为要旋转len2次 
			int start = 0;								//从start开始匹配 
			while ( start + len2 <= len1 ) {			//字符串a从start开始，剩余长度要大于都等于字符串b长度 
				pos = match(a, len1, b, len2, start);
				if ( pos>=0 ) {							//找到匹配 
					if ( tag[pos] == 0 ) {				//未统计过，此次统计 
						cnt++;
						tag[pos] = 1;
					}
					start = pos+1;						//start从上一次匹配的下一位开始重新匹配 
				} else									//未找到匹配 
					break;
			}
			rotate(b, len2, 0);							//旋转，即循环左移一位 
		}
		printf("%d\n", cnt);
	}
	
	return 0;
} 
