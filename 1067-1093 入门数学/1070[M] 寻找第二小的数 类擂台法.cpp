#include <stdio.h>

void Solution(int a[], int n, int&min, int&subMin)
{  
    //ע�����ʱ�ǲ����µ�
    //subMinҪ���ǲ��ܺ�min��� 
    for (int i = 0; i < n; i++) {
        if (a[i] < min) { 
            subMin = min;			//�ȱ���min���ٸı�min 
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
		
		//min��subMin��ֵ��һ�������
		//ע��ÿ��ѭ����Ҫ���� 
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
