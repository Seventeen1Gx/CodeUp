#include<stdio.h>
//对正整数n，欧拉函数是小于n的正整数中与n互质的数的数目
  
int oula(int n)  
{  
    int i,sum=n;  
    for(i=2;i<=n;i++)  
    	if(n%i==0) 					//i是一个质因子，只计算一次 
    	{  
       	 	sum -= sum / i;  		//按通式连乘从左到右一个括号一个括号地计算
        	while( n%i == 0 )  		//相同的质因子只计算一次 
        	  n /= i;  				//每个正整数都能够以唯一的方式表示成它的质因数的乘积 
    	}  							//这里处理之后，n的质因子乘积形式消去了一种数 
    return sum;  
}  

int main()  
{  
    int s,n;  
    scanf("%d",&s);  
    while(s--)  
    {  
        scanf("%d",&n);  
        printf("%d\n",oula(n));  
    }  
    return 0;  
}  
