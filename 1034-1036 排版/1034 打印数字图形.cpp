#include <stdio.h>
//寻求输出结果的规律
//对于输入n，对输出结果的行标号为i
//i的变化规律为1，2，3，……，n，n-1，n-2，……，1
//对于每行标号i，每行内容为n-i个空格，然后输出数字回文字符串"123……i……321" 


//输入为n，对于标号为i的行，输出前导空格符，n-i个 
void printBlank(int i, int n)
{
	for (int j = 0; j < n - i; j++)
		printf(" ");
}

//输入为n，对于标号为i的行，输出数字回文字符串"123……i……321"
void printNumStr(int i, int n)
{
	int j;
	for (j = 1; j <= i; j++)
		printf("%d", j);
	
	//上个循环结束时j=i+1，这个循环开始j应该为i-1 
	for ( j = j - 2; j >= 1; j--)
		printf("%d", j);
}

int main()
{
	int n;
	int i;
	while (scanf("%d", &n) != EOF) {
		//处理i递增 
		i = 1;
		while ( i <= n ) {
			//输出前导空白
			printBlank(i, n);
			//输出数字回文
			printNumStr(i, n);
			//换行
			printf("\n");
			i++; 
		}
		//循环结束i=n+1
		i = i - 2;
		while ( i >= 1 ) {
			//输出前导空白
			printBlank(i, n);
			//输出数字回文
			printNumStr(i, n);
			//换行，最后一行不用换行 
			if ( i != 1 )
			 	printf("\n");
			i--;
		} 
	}
	return 0;
}
