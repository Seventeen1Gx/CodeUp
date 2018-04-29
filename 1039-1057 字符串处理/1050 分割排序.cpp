#include <stdio.h>
#define IN 1
#define OUT 0
//请注意，字符串可能以5结尾也可能不以5结尾 


//返回c*n 
int acount(char c, int n)
{
	int a;
	switch (c) {
		case '0':	a = 0 * n;  break;
		case '1':	a = 1 * n;	break;
		case '2':	a = 2 * n;	break;
		case '3':	a = 3 * n;	break;
		case '4':	a = 4 * n;	break;
		case '5':	a = 5 * n;	break;
		case '6':	a = 6 * n;	break;
		case '7':	a = 7 * n;	break;
		case '8':	a = 8 * n;	break;
		case '9':	a = 9 * n;	break;
	}
	return a;
}


//数组s中start和end之间是一个数字 
int num(char s[], int start, int end)
{
	int n = 0;
	int weight = 1;
	//weight代表每位的权重 
	
	while ( start<=end ) {
		n += acount( s[end], weight);
		end--;
		weight *= 10;
	}
	return n;
}

//冒泡排序 
void sort(int a[], int n)
{	
	int t;
	int flag = 1;
	for (int i=0; i<n && flag; i++) {
		flag = 0;
		for (int j=0; j<n-i-1; j++) {
			if ( a[j]>a[j+1] ) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 1;
			}
		}
	}
		
}

int main()
{
	char s[1001];
	int a[1001];
	
	while ( gets(s) != NULL ) {
		
		int i;
		int n=0;
		int start, end;
		//state标识当前s[i]的意义，数字内还是数字外，初始为OUT 
		int state = OUT;
		
		for (i=0; s[i] != '\0'; i++) {
			if ( state==OUT && s[i] != '5' ) {		//进入数字 
				state = IN;							//改变状态 
				start = i;							//记下数字开始位置 
			}
			if ( state==IN && s[i] == '5' ) {		//离开数字 
				state = OUT;						//改变状态 
				end = i-1;							//记下数字结束位置 
				a[n] = num(s, start, end);			//a[n]存结果数字 
				n++;
			}
		}
		
		//出循环后，s[i]为\0，而s[i-1]若不是5， 
		//说明最后一个数字不是以5标识结束，那么还有最后一个数字未统计
		//这里统计 
		if ( s[i-1] != '5' ) {
			end = i-1;
			a[n] = num(s, start, end);
			n++;
		}
	
		//排序	
		sort(a, n);
		
		//输出结果 
		for (int i=0; i<n; i++)
			if( i==0 )
				printf("%d", a[i]);
			else
				printf(" %d", a[i]);
		 
		printf("\n");
		
	}
	return 0;
}
