// 同理上题
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int sx, sy;
int ex, ey;
int jump[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int sign[100][100];
int n, m;

struct node {
	int x, y, step;
};

void bfs()
{
	queue<node> q;
	node cur, next;
	cur.x = sx;
	cur.y = sy;
	cur.step = 0;
	sign[sx][sy] = 1;
	
	q.push(cur);
	
	while ( !q.empty() ) {
		cur = q.front();
		q.pop();
		
		for (int i=0; i<4; i++) {
			next.x = cur.x + jump[i][0];
			next.y = cur.y + jump[i][1];
			next.step = cur.step + 1;
			
			if (next.x >= 0 && next.x < n && next.y >= 0 && next.y < m && !sign[next.x][next.y])
			{
				if (next.x == ex && next.y == ey)
				{
					printf("%d\n", next.step);
					return;
				}
				sign[next.x][next.y] = 1;
				q.push(next);
			}
		}
	}
	printf("%d\n", -1);
}

int main()
{
	int t;
	scanf("%d", &t);
	
	while (t--) {
		scanf("%d %d", &n, &m);
		memset(sign, 0, sizeof(sign));
		
		char c;
		scanf("%c", &c);
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				scanf("%c", &c);
				switch (c) {
					case 'S' :
						sx = i;	sy = j;	break;
					case '#' :
						sign[i][j] = 1;	break;
					case 'E' :
						ex = i; ey = j;	break;
				}
			}
			scanf("%c", &c);
		}
		bfs();
	}
	return 0;
}
