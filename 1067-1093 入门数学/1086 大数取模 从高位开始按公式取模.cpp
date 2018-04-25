//  	(a+b) mod (n) = (a mod n) + (b mod n) mod (n) 
//
//		m = 1 % n 
//		m = 12 % n  = ( 1 * 10 + 2 ) % n = ( 1 % n * 10 + 2 ) % n = ( m * 10 + a[i] ) % n
//      123 % n = ( 12 * 10 + 3) % n = ( 12 % n * 10 + 3) % n 
//
//        ...
//      12345678901234567890 % n =(( 1 % n * 10 + 2 £© % n * 10 + 3 ) % n... 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main ()
{
    char str[1010];
    int n,m,i,j;
    while(~scanf("%s %d",str,&n)){
        m=0;
        for(i=0;str[i]!='\0';i++){
            m=m*10+str[i]-'0';
            m%=n;
        }
        printf("%d\n",m);
    }
    return 0;
}
