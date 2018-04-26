#include<stdio.h> 
int main() 
{ 
    int cas,i,nian,yue,ri; 
    scanf("%d",&cas); 
    
	while(cas--) { 
        int sum=0,flag=0; 
        scanf("%d-%d-%d",&nian,&yue,&ri); 
        
        //出身于闰年2月29，但18年后不是闰年 
		if((nian%400==0||(nian%4==0&&nian%100!=0))&&((nian+18)%400!=0&&((nian+18)%4!=0||(nian+18)%100==0)))//当年是闰年,18年后不是闰年 
        { 
            if(yue==2&&ri==29) {printf("-1\n");continue;} 
        }
		
		//sum先按每年365天算 
        sum=365*18;
		//看出身年第二年到倒数第二年之间有没有漏闰年 
        for(i=nian+1;i<nian+18;i++) 
            if(i%400==0||(i%4==0&&i%100!=0)) 
                sum+=1; 
        
		//看首年生日到年末，是否跨越2月29日 
        if(nian%400==0||(nian%4==0&&nian%100!=0)) 
        { 
            if(yue==1||(yue==2&&ri<29)) sum+=1; 
        } 
        //看最后一年年初到生日，是否跨越2月29日
        if((nian+18)%400==0||((nian+18)%4==0&&(nian+18)%100!=0)) 
        { 
            if(yue>=3) sum+=1;  
        } 
        printf("%d\n",sum); 
    } 
    return 0; 
} 
