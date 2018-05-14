#include <stdio.h>
#include <string.h>
//全排列解释为n个人去坐n个位置，按这个思路，
//第一个位置可在n个人中选一个，n种情况
//第二个位置可在剩下n-1个人中选一个，n-1种情况
//……
//本题递归代码也是以此思路进行的
//需要注意的是本题要按字典序输出 

//数组a，n为数组长度，m是当前要处理的位置，前面的位置已坐好了人，剩下的人在m~n-1 
void arrange(char a[], int n, int m) 
{
	char t;
	if (m == n)							//所有位置都坐好了人，输出 
		printf("%s\n", a);
	else {
		for (int i=m; i<n; i++) {      	//剩下的人m~n-1都可能被安排在m位置 
			t = a[i];					//t保存所选出的要坐m位置的人 
			
			int j;
			for (j=i; j>m; j--)			//为了字典序输出，这里使用了后移换位置的方法 
				a[j] = a[j-1];
			a[j] = t;
			
			arrange(a, n, m+1);			  //m位置已安排好，安排剩下的 
			
			t = a[j];					  //上一次情况下的递归结束，恢复原始数组，进行下一种情况的递归 
			for (j=m; j<i; j++)
				a[j] = a[j+1];
			a[j] = t;
		}
	}
}


//冒泡排序 
void sort(char a[], int n)
{
	char t;
	for(int i=0; i<n; i++) {
		int flag = 1;
		for (int j=0; j<n-i-1; j++) {
			if ( a[j] > a[j+1] ) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 0;
			}
		}
		if (flag)
			return;
	}
}

int main()
{
	
	int n;
	scanf("%d", &n);
	
	char a[9];
	
	while (n--) {
		scanf("%s", a);				//读入一组输入 
		getchar();					//吸收结尾换行符 
		int len = strlen(a);
		sort(a, len);				//先排序 
		arrange(a, len, 0);			//全排列处理 
		printf("\n"); 
	}
	
	return 0;
}
