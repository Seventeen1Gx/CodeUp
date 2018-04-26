// �߶���,����Ҷ��㶼�����Һ��� 
#include <stdio.h>
const int MAXN = 30005;

int sum[MAXN * 4];		//�߶���,��Ű���ȫ��������1��ʼ��Ҷ�ڵ������a,ÿ����Ҷ�������֮�� 
int a[MAXN], n;			//��1-n��ŵ���Ϣ,�����Ǵ����Ŷ�����,������a��û���ˡ����� 

void PushUp(int t)		//����t�����ڵ� 
{
	sum[t] = sum[t * 2] + sum[t * 2 + 1];
}

void Build(int l, int r, int t)		//l��r�ǵ�ǰa�����Ҷ˵��ţ�t�Ƕ�Ӧ��������
{
	if (l == r) {
		sum[t] = a[l];
	} else {
		int m = (l + r) / 2;
		Build(l, m, t * 2);
		Build(m+1, r, t * 2 + 1);
		PushUp(t);
	}
}

void Update(int i, int j, int l, int r, int t)
//a[i]��Ҫ��j���j��l��r�ǵ�ǰa�����Ҷ˵��ţ�t�Ƕ�Ӧ��������ţ��������£��ߵ�Ŀ��Ҷ�ڵ�i 
{
	if (l == r)
		sum[t] += j;
	else {
		int m = (l + r) / 2;
		if (i <= m)		//Ҷ�ڵ������
			Update(i, j, l, m, t * 2);
		else			//Ҷ�ڵ����ұ�
			Update(i, j, m+1, r, t * 2 + 1);
		PushUp(t); 
	}
}

int Query(int L, int R, int l, int r, int t)  //����a������L-R֮�ͣ�l,r,t����ͬ�ϣ���ǰ 
{
	if (L <= l && R >= r)
		return sum[t];
	else {
		int m = (l + r) / 2;
		int ANS = 0;
		if (L <= m)		//�������������غ�
			ANS += Query(L, R, l, m, t * 2);
		if (R >= m+1) 	//�������������غ� 
			ANS += Query(L, R, m+1, r, t * 2 + 1);
		return ANS;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	int cnt = 0; 
	
	while (t--) {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) 
			scanf("%d", &a[i]);
		Build(1, n, 1);
		
		printf("Case %d:\n", ++cnt);
		
		int i, j;
		char Command[6];
		scanf("%s", Command);
		while (Command[0] != 'E') {
			switch(Command[0]) {
				case 'A' :	scanf("%d%d", &i, &j);
							Update(i, j, 1, n, 1);
							break;
				case 'S' :	scanf("%d%d", &i, &j);
							Update(i, -j, 1, n, 1);
							break;
				case 'Q' :	scanf("%d%d", &i, &j);
							printf("%d\n", Query(i, j, 1, n, 1));
							break;
			}
			scanf("%s", Command);
		}
		
	}
} 
