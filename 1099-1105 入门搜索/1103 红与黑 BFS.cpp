#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int sx, sy;
int jump[4][2] = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int sign[20][20];
int w, h;
int cnt;

struct node {
	int x, y;
};

void bfs()
{
	queue<node> q;
	node cur, next;
	cur.x = sx;
	cur.y = sy;
	sign[sx][sy] = 1;
	
	q.push(cur);
	
	while (!q.empty()) {
		cur = q.front();
		q.pop();
		
		for (int i=0; i<4; i++) {
			next.x = cur.x + jump[i][0];
			next.y = cur.y + jump[i][1];
			
			if (next.x >= 0 && next.x < h && next.y >= 0 && next.y < w && !sign[next.x][next.y])
			{
				cnt++;
				sign[next.x][next.y] = 1;
				q.push(next);
			}
		}
	}
}

int main()
{
	scanf("%d%d", &w, &h);
	while (w != 0 || h != 0) {
		cnt = 1;
		memset(sign, 0, sizeof(sign));
		
		
		char c;
		scanf("%c", &c);
		for (int i=0; i<h; i++) { 
			for (int j=0; j<w; j++) {
				scanf("%c", &c);
				switch(c) {
					case '#' :
						sign[i][j] = 1;	break;
					case '@' :
						sx = i;	sy = j;	break;
				}
			}
			scanf("%c", &c);
		} 
		
		bfs();
		printf("%d\n", cnt);
		scanf("%d%d", &w, &h);
	}
	return 0;
}
