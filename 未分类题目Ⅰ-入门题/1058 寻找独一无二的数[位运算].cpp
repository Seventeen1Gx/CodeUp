#include <stdio.h>
//异或操作，同零异一
//有交换律即 a^b = b^a
//有结合律即 (a^b)^c = a^(b^c)
//且 a^a = 0，a^0 = a
//除了独一无二的数其余的数都出现了偶数次 
//结果 = n1 ^ n2 ^ n3 ^ ……^nn

int main()
{
	int n, a, special;
	scanf("%d", &n);
	
	while (n) {
		special = 0;					//初始化为0 
		for (int i=n; i>0; i--) {
			scanf("%d", &a);
			special ^= a;
		}
		
		printf("%d\n", special); 
		
		scanf("%d", &n);
	}
	
	return 0;
}
