#include <stdio.h>

void Solution(int a[], int n, int&min, int&subMin)
{  
    //注意相等时是不更新的
    //subMin要求是不能和min相等 
    for (int i = 0; i < n; i++) {
        if (a[i] < min) { 
            subMin = min;			//先保存min，再改变min 
			min = a[i];
        } 
        else if (a[i] > min && a[i] < subMin)
            subMin = a[i];
    }
}

int main()
{
	int c;
	scanf("%d", &c);
	
	int n, a[10], min, subMin;	 
	while (c--) {
		scanf("%d", &n);
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
		
		//min与subMin初值是一个大的数
		//注意每次循环都要更新 
		min = 100;
		subMin = 100;
		Solution(a, n, min, subMin);
		
		if (100 == subMin)
			printf("NO\n");
		else
			printf("%d\n", subMin);

	}
	return 0;
	
}
