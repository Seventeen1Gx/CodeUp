#include <stdio.h>
const int MAXN = 30005;

int max[MAXN * 4];		//ÿ������Ӧa��l��r�е����ֵ 
int a[MAXN], n; 		//���1-n��ÿ��Ԫ��Ϊѧ���ɼ�

void PushUp(int t)		//����max[t]
{
	max[t] = (max[t * 2] >= max[t * 2 + 1] ? max[t * 2] : max[t * 2 + 1]);
}

void Build(int l, int r, int t)		//max[t]��������Ӧ������l-r
{
	if (l == r)			//Ҷ�ڵ� 
		max[t] = a[l];
	else {
		int m = (l + r) / 2;
		Build(l, m, t * 2);
		Build(m+1, r, t * 2 + 1);
		PushUp(t);
	}
}

void Update(int i, int j, int l, int r, int t)		//���i��ͬѧ�ɼ���Ϊj 
{
	if (l == r)
		max[t] = j;
	else {
		int m = (l + r) / 2;
		if(i <= m)
			Update(i, j, l, m, t * 2);
		else
			Update(i, j, m+1, r, t * 2 + 1);
		PushUp(t);
	} 
}

int Query(int L, int R, int l, int r, int t)	//��L-R��ͬѧ�з��������,���ص�ǰt����������������ֵ 
{
	if (L <= l && R >= r)		//ֻ�и��ǵĽ��Żῼ�ǣ��������価���ܻ����Ϊ�������� 
		return max[t];
	else {
		int m = (l + r) / 2;
		int max1 = 0, max2 = 0;
		if(L <= m)
			max1 = Query(L, R, l, m, t * 2);
		if(R >= m+1)
			max2 = Query(L, R, m+1, r, t * 2 + 1);
		return max1 >= max2 ? max1 : max2;
	}
}

int main()
{
	int m;
	
	while (~scanf("%d %d", &n, &m)) {
		for (int i = 1; i <= n; i++)
			scanf("%d", &a[i]);
		Build(1, n, 1);
		
		for (int i = 0; i < m; i++) {
			char c;
			int j, b;
			scanf("%c", &c);				//���ջس� 
			scanf("%c%d%d", &c, &j, &b);
			switch(c) {
				case 'U' :	Update(j, b, 1, n, 1);
							break;
				case 'Q' :	printf("%d\n", Query(j, b, 1, n, 1));
							break;
			}
			
		} 
	}
	
	
	return 0;
}
