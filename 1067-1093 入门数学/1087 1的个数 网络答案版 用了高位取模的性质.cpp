
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
        while(k < n){///因为是n的倍数，所以求出小于n的含1的个数
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
