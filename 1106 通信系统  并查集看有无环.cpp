//有环就会收到重复的包 
//使用并查集，初始有N个集合 ，合并一次少一个 
//只有 m = n - 1 时才有可能正确，少必不连通，多必有环 
#include <stdio.h>
#include <string.h>

int pre[1005];			//从1开始对结点编号 
int cnt;				//集合数 
int loopFlag; 

int Find(int x)
{
	while ( pre[x] > 0)
		x = pre[x];
	return x;			//返回根的编号 
} 

void Union(int x, int y)
{
	int root1 = Find(x);
	int root2 = Find(y);
	if (root1 != root2) {
		pre[root1] = root2;
		cnt--;
	} else {
		loopFlag = 1;
	}
}


int main()
{
	int n, m;
	int x, y;
	
	scanf("%d %d", &n, &m);
	while (n != 0 || m != 0) {
		if ( m == n - 1 ) {
			memset(pre, -1, sizeof(pre));
			loopFlag = 0;
			cnt = n;
			for (int i = 0; i < m; i++) {
				scanf("%d %d", &x, &y);
				Union(x, y);
			}
		
			if (cnt == 1 && loopFlag == 0)
				printf("Yes\n");
			else
				printf("No\n");
		} else {
			for (int i = 0; i < m; i++) 
				scanf("%d %d", &x, &y);
			printf("No\n");
		}
		scanf("%d %d", &n, &m);
	}
	return 0;
}
