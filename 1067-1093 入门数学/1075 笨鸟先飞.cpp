#include <stdio.h>

int main()
{
	int t, n;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d", &n);
		int v=1;
		int s=0;
		//һ����λʱ�����һ�� 
		for (int i=0; i<n; i++) {
			s += v;
			//����Ĺ����о�Ҫȡ�࣬��Ȼ�ᳬint��Χ
			s %= 10000;				 
			v += 2;
		}
		printf("%d\n", s);
	}
	
	return 0;
}
