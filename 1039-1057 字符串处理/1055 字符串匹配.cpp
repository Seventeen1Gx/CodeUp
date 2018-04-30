#include <stdio.h>
#include <string.h>

//��ת�ַ���a��n��m�Ĳ��� 
void reverse(char a[], int n, int m)
{
	char t;
	while ( n<m ) {
		t = a[n];
		a[n] = a[m];
		a[m] = t;
		n++;
		m--;		
	}
}

//��ת�ַ���a 
void rotate(char a[], int n, int p)
{
	reverse(a, 0, p);				//��ת0��p 
	reverse(a, p+1, n-1);			//��תp+1��n-1 
	reverse(a, 0, n-1);				//��ת�����ַ��� 
}

//����Ϊn���ַ���a������Ϊm���ַ���b����start��ʼƥ�䣬����b��a�е�һ�γ��ֵ��±� 
int match(char a[], int n, char b[], int m, int start)
{
	for (int i=start; i<n; i++) {			//��a��start����ʼƥ�� 
		int j;
		for (j=0; j<m && i+j<n; j++) {		//��b��0����ʼƥ�� 
			if ( a[i+j] != b[j] ) {
				break;	
			}
		}
		if (j==m)							//˵��b��a�б��ҵ� 
			return i;
	}
	return -1;
}

int main()
{
	char a[1001], b[101];
	//Ϊ�˲�ͳ���ظ���ͬ��ƥ��
	//���������ÿ��λ���Ƿ���ƥ��ɹ���ʼ��λ��
	//ÿ��λ��ƥ��ɹ������ͳ��һ�μ��� 
	int tag[1001];					 
	
	while ( gets(a) && gets(b) ) {
		
		int pos;
		int cnt = 0;
		int len1 = strlen(a);
		int len2 = strlen(b);
		
		//��������ʼ��Ϊ0 
		for (int i=0; i<len1; i++)
			tag[i] = 0;
		
		for (int i=0; i<len2;i++) {						//��ѭ������ΪҪ��תlen2�� 
			int start = 0;								//��start��ʼƥ�� 
			while ( start + len2 <= len1 ) {			//�ַ���a��start��ʼ��ʣ�೤��Ҫ���ڶ������ַ���b���� 
				pos = match(a, len1, b, len2, start);
				if ( pos>=0 ) {							//�ҵ�ƥ�� 
					if ( tag[pos] == 0 ) {				//δͳ�ƹ����˴�ͳ�� 
						cnt++;
						tag[pos] = 1;
					}
					start = pos+1;						//start����һ��ƥ�����һλ��ʼ����ƥ�� 
				} else									//δ�ҵ�ƥ�� 
					break;
			}
			rotate(b, len2, 0);							//��ת����ѭ������һλ 
		}
		printf("%d\n", cnt);
	}
	
	return 0;
} 
