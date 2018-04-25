// 线段树,除了叶结点都有左右孩子 
#include <stdio.h>
const int MAXN = 30005;

int sum[MAXN * 4];		//线段树,编号按完全二叉树从1开始，叶节点存数组a,每个非叶结点存儿子之和 
int a[MAXN], n;			//放1-n编号的信息,本题是窗口排队人数,建完树a就没用了。。。 

void PushUp(int t)		//更新t号树节点 
{
	sum[t] = sum[t * 2] + sum[t * 2 + 1];
}

void Build(int l, int r, int t)		//l与r是当前a中左右端点编号，t是对应的树结点号
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
//a[i]需要加j或减j，l和r是当前a中左右端点编号，t是对应的树结点编号，从上往下，走到目标叶节点i 
{
	if (l == r)
		sum[t] += j;
	else {
		int m = (l + r) / 2;
		if (i <= m)		//叶节点在左边
			Update(i, j, l, m, t * 2);
		else			//叶节点在右边
			Update(i, j, m+1, r, t * 2 + 1);
		PushUp(t); 
	}
}

int Query(int L, int R, int l, int r, int t)  //计算a数组中L-R之和，l,r,t意义同上，当前 
{
	if (L <= l && R >= r)
		return sum[t];
	else {
		int m = (l + r) / 2;
		int ANS = 0;
		if (L <= m)		//与左子区间有重合
			ANS += Query(L, R, l, m, t * 2);
		if (R >= m+1) 	//与右子区间有重合 
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
