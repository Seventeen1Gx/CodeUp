// 每一个丑数等于 一个抽数 x (2、3、5、7)  1除外 
// 思路是按序产生  即是按照最终要得到的数一个个来的 
#include <stdio.h>

int min(int n1, int n2, int n3, int n4)
{
	int t = n1;
	if ( n2<t )
		t = n2;
	if ( n3<t )
		t = n3;
	if ( n4<t )
		t = n4;
	return t;
}

int main()
{
	int n;
	long long a[5842];
	a[0] = 1; 
	int m1, m2, m3, m4; 
	int flag1, flag2, flag3, flag4;
	
	for (int i=0; i<5842; i++) {
		flag1 = flag2 = flag3 = flag4 = 1;
		for (int j=0; j<=i; j++) {
			if ( flag1 && a[j]*2 > a[i] ) {
				flag1 = 0;
				m1 = a[j]*2;
			}
			if ( flag2 && a[j]*3 > a[i] ) {
				flag2 = 0;
				m2 = a[j]*3;
			}
			if ( flag3 && a[j]*5 > a[i] ) {
				flag3 = 0;
				m3 = a[j]*5;
			}
			if ( flag4 && a[j]*7 > a[i] ) {
				flag4 = 0;
				m4 = a[j]*7;
			}
			if (!flag1 && !flag2 && !flag3 && !flag4)
				break;
		}
		a[i+1] = min(m1, m2, m3, m4);
	}
		
	
	scanf("%d", &n);
	while (n) {
		if( n%10==1 && n%100 != 11 )
			printf("The %dst humble number is %d.\n", n, a[n-1]);
		else if( n%10==2 && n%100 != 12 )
			printf("The %dnd humble number is %d.\n", n, a[n-1]);
		else if( n%10==3 && n%100 != 13 )
			printf("The %drd humble number is %d.\n", n, a[n-1]);
		else 
			printf("The %dth humble number is %d.\n", n, a[n-1]);
		scanf("%d", &n);
	}
	return 0;	
} 
