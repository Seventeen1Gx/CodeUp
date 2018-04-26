#include <stdio.h>
//观察输出规律，对于输入n
//输出每行的行标号0，1，2，……，(n-1)/2，……，2，1，0
//标号为i的行字符数n-i，从0开始标号，n-i-1和i处输出X，其余输出空格


//对于输入n，输出标号i的行 
void printLine(int n, int i)        //i是行号，从零开始给每个字符标号 
{
	for (int j=0; j<n-i; j++)	//输出n-i个字符 
		if(j==i || j==n-i-1)	//n-i-1和i处输出X 
			printf("X");
		else 					//其他输出空格 
			printf(" ");		
	printf("\n");				//末尾换行符 
}

//放大算法 
void enlarge(int n)
{	
	int i = 0;
	while ( i <= (n-1)/2 ) {
		printLine(n, i);
		i++;
	} 
	//循环结束，i=(n-1)/2 + 1;
	i -= 2;
	while ( i >= 0 ) {
		printLine(n, i);
		i--;
	}
}

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		enlarge(n);
		printf("\n");
	}
	return 0;
}
