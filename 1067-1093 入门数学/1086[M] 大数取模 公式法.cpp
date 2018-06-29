//		首先模运算符合以下公式： 
//  	(a+b) mod (n) = ((a mod n) + (b mod n)) mod (n)
//		(a-b) mod (n) = ((a mod n) - (b mod n) + n) mod (n)
//		(ab) mod (n) = (a mod n)(b mod n) mod n
//		a mod n mod n = a mod n
//
//		将大整数写成"从左往右"的形式，如： 
//		1234 mod n = (((1*10+2)*10+3)*10+4) mod n
//				   = (((1*10+2)*10+3)*10 mod n + 4 mod n) mod n
//				   = ... 

#include<stdio.h>

int main ()
{
    char str[1010];
    int n, m, i, j;
    while( ~scanf("%s %d",str,&n) ) {
        m = 0;
        for (i = 0; str[i] != '\0'; i++) {			//从高位开始每次循环添加一位进行考虑  
            m = m * 10 + str[i] - '0';				//多添加一位	
            m %= n;									//取余 
        }
        printf("%d\n", m);
    }
    return 0;
}
