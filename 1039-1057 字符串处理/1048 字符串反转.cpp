#include <stdio.h> 
#define IN 1
#define OUT 0
//本题把标点符号也算在一个单词里，本题单词以空格分开 

//将数组s从front到rear的部分反转 
void reverse(char s[], int front, int rear)
{
	char t;
	while ( front<rear ) {
		t = s[front];
		s[front] = s[rear];
		s[rear] = t;
		front ++;
		rear --;
	}
}

//按题目要求处理 
void processing(char s[])
{
	int i, start, end;
	
	//state标识指针所处位置，单词内或单词外，初始为单词外 
	int state = OUT;
	for (i=0; ; i++) { 
		if( state==OUT && s[i] != ' ' ) {		//此时s[i]为单词首字母 
			state = IN;							//进入单词，改变状态 
			start = i;							//记下单词起始位置 
		} else if ( state==IN && (s[i] == ' ' || s[i] == '\0') ) {		//此时s[i]为单词末字母的后一位 
			state = OUT;						//改变此时状态 
			end = i - 1;						//记下单词结束位置 
			reverse(s, start, end);				//对一个单词所处区域反转 
		}
		//处理完之后再看有没有遍历完成 
		if( s[i] == '\0' ) 
			return;
	}
}

int
main()
{
	int t;
	scanf("%d", &t);
	getchar();				//吸收缓存区换行符 
	
	char s[1001];
	
	while (t--) {
		gets(s);
		processing(s);
		puts(s);	
	}
	
	return 0;
}
