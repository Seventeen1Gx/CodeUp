#include <stdio.h>


//冒泡排序 
void sort(int a[], int n)
{
	int i, j, t, flag;
	
	for ( i=0; i<n; i++ ) {
		flag = 1;
		for ( j=0; j<n-i-1; j++) {
			if ( a[j] > a[j+1] ) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 0;
			}
		}
		if (flag)
			break;
	}
}


//要求最少票数，只需挑选人数较小的(n+2)/2个州，
//每个州再出(a[i]+2)/2票即可
//故这里用到了排序算法求较小的(n+2)/2个州 
int main()
{
	int n, i, a[101], MinBallot;
	scanf("%d", &n);
	
	while ( n != 0 ) {
		i = 0;
		while ( i<n ) {
			scanf("%d", &a[i]);
			i++;
		}
		sort(a,n);
		MinBallot = 0;
		for ( i=0; i < (n+2)/2; i++ ) {
			MinBallot += (a[i]+2)/2;
		}
		printf("%d\n", MinBallot);
		scanf("%d", &n);
	}
	return 0;	
} 
