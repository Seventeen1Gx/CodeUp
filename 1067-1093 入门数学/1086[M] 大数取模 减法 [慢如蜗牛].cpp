#include <stdio.h>
#include <string.h>
//本代码采用的方法是一次次做减法，直到不够减就是余数 

//数组a的数减去数组b的数 
void minus(char a[], char b[], int len1, int len2);

int main()
{
	char a[1001], b[6];
	
	while ( scanf("%s %s", a, b) != EOF ) {
		int len1 = strlen(a);
		int len2 = strlen(b);
		
		int i=0;								//i一直指向数字的开始 
		while ( a[i] == '0' ) i++;				//忽略前导0 
		
		while ( len1 - i > len2 ) {
			minus(a, b, len1-1, len2-1);
			i=0;
			while ( a[i] == '0' ) i++;			//忽略前导0 
		}
		
		//这时a与b长度相同 
		int j=0, flag = 0;
		while ( i<len1 ) {						//从首位开始比较a与b的大小 
			if ( a[i]<b[j] ) {					//说明b大，a已经是余数 
				flag = 1;
				break;
			} else if ( a[i]>b[j] ) {			//说明a大，还要减一次 
				flag = 0;
				break;	
			}
		}
		
		if (!flag)
			minus(a, b, len1-1, len2-1);
		
		int flag2 = 1;
		for (i=0; i<len1; i++) {
			if( a[i] != '0' )					//忽略前导0 
				flag2 = 0;
			if ( flag2 )
				continue;
			printf("%c", a[i]);
		}
		printf("\n");
	}
	return 0;
}

void minus(char a[], char b[], int i, int j)
{
	while (j>=0) {							//从末位开始对齐相减 
		int t = i;
		if ( a[t] < b[j] ) {				//这一位不够减，需要借位 
			while ( a[t-1] == '0' ) {      	//往前借位 
				a[t-1] = '9';
				t--;
			}
			a[t-1] -= 1;
			a[i] += 10;
		}
		a[i] = a[i] - b[j] + '0';
		i--;
		j--;		
	}
}
