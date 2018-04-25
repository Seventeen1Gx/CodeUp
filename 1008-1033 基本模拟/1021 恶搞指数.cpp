#include <stdio.h>

int main()
{
	char gift[1000];
	
	
	while ( gets(gift) ) {
		int i = 0;
		int index = 0;
		while ( gift[i] != '\0' ) {		//从左至右遍历字符 
			if ( gift[i] == '(' )		//遇到'('，层数+1 
				index++;
			else if ( gift[i] == ')' )	//遇到')'，层数-1 
				index--;
			else						//遇到'B',已拿到礼物，退出循环 
				break;
			i++;
		}
		printf("%d\n", index);
	}
	return 0;
}
