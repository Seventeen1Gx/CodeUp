#include <stdio.h>
#include <string.h>
//ȫ���н���Ϊn����ȥ��n��λ�ã������˼·��
//��һ��λ�ÿ���n������ѡһ����n�����
//�ڶ���λ�ÿ���ʣ��n-1������ѡһ����n-1�����
//����
//����ݹ����Ҳ���Դ�˼·���е�
//��Ҫע����Ǳ���Ҫ���ֵ������ 

//����a��nΪ���鳤�ȣ�m�ǵ�ǰҪ�����λ�ã�ǰ���λ�����������ˣ�ʣ�µ�����m~n-1 
void arrange(char a[], int n, int m) 
{
	char t;
	if (m == n)							//����λ�ö��������ˣ���� 
		printf("%s\n", a);
	else {
		for (int i=m; i<n; i++) {      	//ʣ�µ���m~n-1�����ܱ�������mλ�� 
			t = a[i];					//t������ѡ����Ҫ��mλ�õ��� 
			
			int j;
			for (j=i; j>m; j--)			//Ϊ���ֵ������������ʹ���˺��ƻ�λ�õķ��� 
				a[j] = a[j-1];
			a[j] = t;
			
			arrange(a, n, m+1);			  //mλ���Ѱ��źã�����ʣ�µ� 
			
			t = a[j];					  //��һ������µĵݹ�������ָ�ԭʼ���飬������һ������ĵݹ� 
			for (j=m; j<i; j++)
				a[j] = a[j+1];
			a[j] = t;
		}
	}
}


//ð������ 
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
		scanf("%s", a);				//����һ������ 
		getchar();					//���ս�β���з� 
		int len = strlen(a);
		sort(a, len);				//������ 
		arrange(a, len, 0);			//ȫ���д��� 
		printf("\n"); 
	}
	
	return 0;
}
