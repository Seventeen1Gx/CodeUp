#include<stdio.h>
//��������n��ŷ��������С��n������������n���ʵ�������Ŀ
  
int oula(int n)  
{  
    int i,sum=n;  
    for(i=2;i<=n;i++)  
    	if(n%i==0) 					//i��һ�������ӣ�ֻ����һ�� 
    	{  
       	 	sum -= sum / i;  		//��ͨʽ���˴�����һ������һ�����ŵؼ���
        	while( n%i == 0 )  		//��ͬ��������ֻ����һ�� 
        	  n /= i;  				//ÿ�����������ܹ���Ψһ�ķ�ʽ��ʾ�������������ĳ˻� 
    	}  							//���ﴦ��֮��n�������ӳ˻���ʽ��ȥ��һ���� 
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
