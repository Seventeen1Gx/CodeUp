#include <stdio.h>
//���������鲢��˼�뼴��
//ע��ϲ���������С�������Ǻϲ�֮ǰ�������С֮�� 

//ð������ 
void sort(int a[], int n)
{
	int t;
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
	int n, m;
	int a[10000], b[10000], c[20000];
	
	while ( scanf("%d %d", &n, &m) == 2 ) {
		//�����һ������ 
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);
		//����ڶ������� 
		for(int i=0; i<m; i++)
			scanf("%d", &b[i]);
		//Ϊ���������� 
		sort(a, n);
		sort(b, m);
		
		
		//׼���鲢�����������α�ֱ������������ 
		int i, j, k;
		i=j=k=0;
		
		while (i<n && j<m) {
			if ( a[i]<b[j] ) {
				c[k] = a[i];
				k++;
				i++;
			} else if ( a[i]>b[j] ) {
				c[k] = b[j];
				j++;
				k++;
			} else {			//��ͬʱֻ����һ�����α궼��1��������һ�� 
				c[k] = a[i];
				i++;
				j++;
				k++;
			}
		}
		
		//����ʣ�µ� 
		while (i<n) {
			c[k] = a[i];
			k++;
			i++;
		}
		while (j<m) {
			c[k] = b[j];
			k++;
			j++;
		}
		
		//������ 
		for (int i=0; i<k; i++)
			if(i==0)
				printf("%d", c[i]);
			else
				printf(" %d", c[i]);
		printf("\n"); 
	}
	return 0;
}
