#include<stdio.h> 
int main() 
{ 
    int cas,i,nian,yue,ri; 
    scanf("%d",&cas); 
    
	while(cas--) { 
        int sum=0,flag=0; 
        scanf("%d-%d-%d",&nian,&yue,&ri); 
        
        //����������2��29����18��������� 
		if((nian%400==0||(nian%4==0&&nian%100!=0))&&((nian+18)%400!=0&&((nian+18)%4!=0||(nian+18)%100==0)))//����������,18��������� 
        { 
            if(yue==2&&ri==29) {printf("-1\n");continue;} 
        }
		
		//sum�Ȱ�ÿ��365���� 
        sum=365*18;
		//��������ڶ��굽�����ڶ���֮����û��©���� 
        for(i=nian+1;i<nian+18;i++) 
            if(i%400==0||(i%4==0&&i%100!=0)) 
                sum+=1; 
        
		//���������յ���ĩ���Ƿ��Խ2��29�� 
        if(nian%400==0||(nian%4==0&&nian%100!=0)) 
        { 
            if(yue==1||(yue==2&&ri<29)) sum+=1; 
        } 
        //�����һ����������գ��Ƿ��Խ2��29��
        if((nian+18)%400==0||((nian+18)%4==0&&(nian+18)%100!=0)) 
        { 
            if(yue>=3) sum+=1;  
        } 
        printf("%d\n",sum); 
    } 
    return 0; 
} 
