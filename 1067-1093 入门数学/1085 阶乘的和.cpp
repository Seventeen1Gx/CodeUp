#include <stdio.h>
//ע�⣬�������������0 
//һ����Ϊ��ͬ�Ľ׳�֮�ͣ�����Щ�׳˶���������ģ���仰��ؼ��� 
//10Ҳ�Ƿ�����ĿҪ��� 0��+1��+2��+3�� 

int main()
{
	//������ a[i] = i!
	//���ڱ�������������ֻ�ÿ���9! 
	int a[10] = {1, 1};
	
	//��������a 
	for (int i=2; i<10; i++)
		a[i] = a[i-1] * i;
	
	int n;	
	scanf("%d", &n);
	
	while (n>=0) {
		if (n==0) {				//0ֱ�Ӳ����� 
			printf("NO\n");
			scanf("%d", &n);
			continue;
		} 
		
		int flag = 0;
		for (int i = 9; i >= 0; i--) {
			if (n >= a[i])
				n -= a[i];
			if (n == 0) 
				flag = 1;
			if (n < 0 || flag) 
				break;
		}
		
		 
		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
		scanf("%d", &n);
	}
	
	return 0;
}
