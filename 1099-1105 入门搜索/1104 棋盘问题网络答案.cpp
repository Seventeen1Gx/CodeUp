#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
#include <iostream>  
#include <algorithm>  
#include <set>  
#include <queue>  
#include <stack>  
  
using namespace std;  
char map[10][10];  
int vis[10];//��i���Ƿ����������  
int cnt;//�ѷ����ӵ���Ŀ  
int sum;//���÷���������  
int n,k;  
void dfs(int s)  
{  
    int i;  
    if(cnt==k){//���е����Ӷ����ú�  
        sum++;  
        return ;  
    }  
    else{  
        if(s>=n)//���Խ��  
            return ;//����  
        else{  
            for(i=0;i<n;i++){//��һ�����ӳ��Է���0-n-1�е�ĳһ��  
                if(map[s][i]=='#'&&!vis[i]){  
                    vis[i]=1;//��Ǹ����Ѿ���������  
                    cnt++;//������+1  
                    dfs(s+1);//��������  
                    cnt--;//����һ�ֵݹ��numʼ�ձ��ֲ���,��Ϊû�з�����  
                    vis[i]=0;//�ڴ˴���������  
                }  
            }  
            dfs(s+1);//����ʣ�µ�k-1�����ӵı���  
        }  
    }  
}  
int main()  
{  
    int i;  
    while(~scanf("%d %d",&n,&k)){  
            getchar();  
        if(n==-1&&k==-1) break;  
        memset(vis,0,sizeof(vis));  
        for(i=0;i<n;i++)  
            scanf("%s",map[i]);  
    cnt=sum=0;  
        dfs(0);  
        printf("%d\n",sum);  
    }  
    return 0;  
}  
