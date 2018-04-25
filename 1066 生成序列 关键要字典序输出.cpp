#include <stdio.h>
#include <string.h>

void arrange(char a[], int n, int m)  //mΪ���п�ʼ��ţ�nΪ���鳤�ȣ���a��m��n�Ĳ���ȫ���� 
{
	char t;
	if (m == n)
		printf("%s\n", a);
	else {
		for (int i=m; i<n; i++) {         //��i��ʼ��ÿ������ȥ��m�����ͷλ�� 
			t = a[i];
			int j;
			for (j=i; j>m; j--) 
				a[j] = a[j-1];
			a[j] = t;
			arrange(a, n, m+1);			  //�źú󣬰���ʣ�µ� 
			t = a[j];					  //�ָ�ԭʼ���� 
			for (j=m; j<i; j++)
				a[j] = a[j+1];
			a[j] = t;
		}
	}
}

void sort(char a[], int n)
{
	char t;
	for(int i=0; i<n; i++) {
		int flag = 1;
		for (int j=0; j<n-i-1; j++) {
			if ( a[j] > a[j+1] ) {
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
				flag = 0;
			}
		}
		if (flag)
			return;
	}
}

int main()
{
	
	int n;
	scanf("%d", &n);
	
	char a[9];
	
	while (n--) {
		scanf("%s", a);
		int len = strlen(a);
		sort(a, len);
		arrange(a, len, 0);
		printf("\n"); 
	}
	
	return 0;
}
