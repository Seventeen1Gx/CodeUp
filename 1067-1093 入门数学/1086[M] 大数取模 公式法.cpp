//		����ģ����������¹�ʽ�� 
//  	(a+b) mod (n) = ((a mod n) + (b mod n)) mod (n)
//		(a-b) mod (n) = ((a mod n) - (b mod n) + n) mod (n)
//		(ab) mod (n) = (a mod n)(b mod n) mod n
//		a mod n mod n = a mod n
//
//		��������д��"��������"����ʽ���磺 
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
        for (i = 0; str[i] != '\0'; i++) {			//�Ӹ�λ��ʼÿ��ѭ�����һλ���п���  
            m = m * 10 + str[i] - '0';				//�����һλ	
            m %= n;									//ȡ�� 
        }
        printf("%d\n", m);
    }
    return 0;
}
