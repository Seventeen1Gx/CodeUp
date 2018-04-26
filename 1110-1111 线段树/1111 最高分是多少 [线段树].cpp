#include <stdio.h>
const int MAXN = 30005;

int max[MAXN * 4];		//每个结点对应a中l到r中的最大值 
int a[MAXN], n; 		//编号1-n的每个元素为学生成绩

void PushUp(int t)		//更新max[t]
{
	max[t] = (max[t * 2] >= max[t * 2 + 1] ? max[t * 2] : max[t * 2 + 1]);
}

void Build(int l, int r, int t)		//max[t]和他所对应的区间l-r
{
	if (l == r)			//叶节点 
		max[t] = a[l];
	else {
		int m = (l + r) / 2;
		Build(l, m, t * 2);
		Build(m+1, r, t * 2 + 1);
		PushUp(t);
	}
}

void Update(int i, int j, int l, int r, int t)		//编号i的同学成绩改为j 
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

int Query(int L, int R, int l, int r, int t)	//查L-R的同学中分数最大数,返回当前t代表的区间中求最大值 
{
	if (L <= l && R >= r)		//只有覆盖的结点才会考虑，且子区间尽可能会宽，因为从上往下 
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
			scanf("%c", &c);				//吸收回车 
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
