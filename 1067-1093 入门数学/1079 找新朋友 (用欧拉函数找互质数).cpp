#include<stdio.h>  
int oula(int n)  
{  
    int i,sum=n;  
    for(i=2;i<=n;i++)  
    if(n%i==0)  
    {  
        sum-=sum/i;  
        while(n%i==0)  
        {  
            n/=i;  
        }  
    }  
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
