#include <stdio.h>

void set(int a[], int n, int i, int m)  //n个元素的数组a，从i开始选m个 
{
	if (m>0 && n-i >= m) {
			set(a, n, i+1, m-1);        //选择a[i]
			int t = a[i]; 
			a[i] = 0;
			set(a, n, i+1, m); 			//不选a[i] 
			a[i] = t;					//必须恢复 
	} else if (m==0) {
		int flag = 1;
		int cnt = 0;
		for (int k=0; k<n && cnt<6; k++) {
			if (flag && a[k] != 0) {
				printf("%d", a[k]);
				cnt ++;
				flag = 0;
			} else if ( a[k] != 0 ){
				printf(" %d", a[k]);
				cnt ++;
			}
		}
		printf("\n"); 
	}
} 

int main()
{
	
	int n, a[12];
	
	scanf("%d", &n); 
	while (n) {
		for (int i=0; i<n; i++)
			scanf("%d", a+i);
		set(a, n, 0, 6);            //从n个元素的数组中挑选6个元素 
		printf("\n");
		scanf("%d", &n);
	}
	return 0;
}
