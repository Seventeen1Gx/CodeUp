
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main(){


    int n;
    while(scanf("%d",&n)!=EOF){
        if(n == 0) {printf("0\n");continue;}
        int ans = 1;
        int k = 1;
        while(k < n){///��Ϊ��n�ı������������С��n�ĺ�1�ĸ���
            k = k*10+1;
            ans++;
        }
        while(k%n){
            k = k%n*10+1;/// k*10+1  = k%n*10+1
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
