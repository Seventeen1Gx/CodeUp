#include <stdio.h>
//观察输出规律，对于输入n 
//第一行输出n个字符，第二行输出n+1个字符，第三个输出n+2个字符，
//依次类推，最后一行输出2n-1个字符
//共输出n行 
//行号i从0开始，共要输出n+i个字符，在n-i与n+i处输出字母，其余输出空格 
//最后一行标号为i-1，全部输出字母 

//对于输入n与c，输出第l行 
void printLine(int i, int n, char c)
{
	for (int j=1; j<= n+i; j++) {		//每行输出n+i个字符 
		if(  i==n-1 ) {				//最后一行的情况 
			printf("%c", c);
			continue;
		}
		if ( j==n+i ||  j==n-i )	//n-i与n+i处输出字母
			printf("%c", c);
		else						//其余输出空格 
			printf(" ");
	}
	printf("\n");
}

int main()
{
	char c;
	int n;
	scanf("%c", &c);
	
	while ( c != '@' ) {
		scanf("%d", &n);
		for (int i=0; i<n; i++) 
			printLine(i, n, c);
		printf("\n");
		getchar();						//吸收换行符 
		scanf("%c", &c);	
	}
	return 0;
}
