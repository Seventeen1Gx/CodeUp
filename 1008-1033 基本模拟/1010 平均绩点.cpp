#include <stdio.h>
const int MAX = 1000;	//每行录入的字符数上限 

//从输入中读取一行至s[]，且保留末尾换行符，返回读入的字符数，读入字符上限是lim
int getline(char s[], int lim)
{
	int c, i;
	
	for ( i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i )
		s[i] = c;
	
	if (c == '\n') {	//录入末尾换行符 
		s[i] = c;
		i++;
	}
	s[i] = '\0';	//末尾添加结束标记 
	
	return i;
}

int main()
{
	int len, n, flag;
	double sum;
	char line[MAX];
	
	//当读入line数组的字符数大于0就开始处理 
	while ( (len = getline(line, MAX)) > 0 ) {	 
		sum = 0;
		n = 0;
		flag = 1;
		for ( int i=0; i<len; ++i) {
			switch (line[i]) {
				case 'A':	sum += 4; n++; break;	//碰到ABCDF，总分加上相应分数，科目数加一 
				case 'B':	sum += 3; n++; break;
				case 'C':	sum += 2; n++; break;
				case 'D':	sum += 1; n++; break;
				case 'F':	sum += 0; n++; break;
				case ' ':	case '\n':	   break;	//碰上空格或换行符，不处理 
				default :	flag = 0;	   break;	//碰上不合法的字符，标志至零 
			}
			if (!flag)	//标志为0，说明录入非法字符，直接结束统计循环 
				break;
		}
		if (flag)
			printf("%.2f\n", sum/n);
		else
			printf("Unknown\n");
	}		
	
	return 0;
}
