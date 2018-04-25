#include <stdio.h>


//对各个情况的数字都详细处理，结果存a矩阵中
//n和m表示该数字在矩阵中所在区域的左上角元素的下标 
void Process(char a[][12], int n, int m, int num)
{
	switch (num) {
		case 0:
			a[n][m+1] = '_';	a[n+1][m] = '|';	a[n+1][m+2] = '|';
			a[n+2][m] = '|';	a[n+2][m+1] = '_';	a[n+2][m+2] = '|';
			break;
		case 1:
			a[n+1][m+2] = '|';	a[n+2][m+2] = '|';
			break;
		case 2:
			a[n][m+1] = '_';	a[n+1][m+1] = '_';	a[n+1][m+2] = '|';
			a[n+2][m] = '|';	a[n+2][m+1] = '_';
			break;
		case 3:
			a[n][m+1] = '_';	a[n+1][m+1] = '_';	a[n+1][m+2] = '|';
			a[n+2][m+1] = '_';	a[n+2][m+2] = '|';
			break;
		case 4:
			a[n+1][m] = '|';	a[n+1][m+1] = '_';	a[n+1][m+2] = '|';
			a[n+2][m+2] = '|';
			break;
		case 5:
			a[n][m+1] = '_';	a[n+1][m] = '|';	a[n+1][m+1] = '_';
			a[n+2][m+1] = '_';	a[n+2][m+2] = '|'; 
			break;
		case 6:
			a[n][m+1] = '_';	a[n+1][m] = '|';	a[n+1][m+1] = '_';
			a[n+2][m] = '|';	a[n+2][m+1] = '_';	a[n+2][m+2]	= '|'; 
			break;
		case 7:
			a[n][m+1] = '_';	a[n+1][m+2] = '|';	a[n+2][m+2] = '|'; 
			break;
		case 8:
			a[n][m+1] = '_';	a[n+1][m] = '|';	a[n+1][m+1] = '_';
			a[n+1][m+2] = '|';	a[n+2][m] = '|';	a[n+2][m+1] = '_';
			a[n+2][m+2] = '|';
			break;
		case 9:
			a[n][m+1] = '_';	a[n+1][m] = '|';	a[n+1][m+1] = '_';
			a[n+1][m+2] = '|';	a[n+2][m+1] = '_';	a[n+2][m+2] = '|';
			break;
	}
}

int main()
{
	char a[3][12] = {0};		//结果通过一个矩阵存4个数字形成 
	int num;
	
	while ( scanf("%d", &num) != EOF ) {
		Process(a, 0, 0, num);
		scanf("%d", &num);
		Process(a, 0, 3, num);
		scanf("%d", &num);
		Process(a, 0, 6, num);
		scanf("%d", &num);
		Process(a, 0, 9, num);
		
		for (int i=0; i<3; i++) {
			for (int j=0; j<12; j++) {
				if ( a[i][j] =='|' || a[i][j] == '_' )
					printf("%c", a[i][j]);
				else
					printf("%c", ' ');		//空白处输出空格 
			}
			printf("\n");	
		}
		
		for (int i=0; i<3; i++) 
			for (int j=0; j<12; j++)
				a[i][j] = 0;
	}
	
	return 0; 
}
