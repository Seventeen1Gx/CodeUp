// 从起点开始，按马能跳到的点，向四周辐射， BFS 

#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

int sx, sy;
int ex, ey;
char s[3], e[3];
int sign[9][9];  // 1-8来标记
int jump[8][2] = {{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};  //马能跳一步的坐标增量情况

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
		
		for (int i = 0; i < 8; i++) {  //依次把周围能跳的点且未访问的入队
			next.x = cur.x + jump[i][0];
			next.y = cur.y + jump[i][1]; 
			next.step = cur.step + 1;
			
			if (next.x > 0 && next.x < 9 && next.y > 0 && next.y < 9 && !sign[next.x][next.y]) {
				if (next.x == ex && next.y == ey) {
					printf("To get from %s to %s takes %d knight moves.\n", s, e, next.step);
					return;
				}
				sign[next.x][next.y] = 1;
				q.push(next);
			}
		} 
	}
}

int main() {
	
	while (scanf("%s %s", s, e) != EOF) {
		sx = s[0] - 'a' + 1;
		sy = s[1] - '0';
		ex = e[0] - 'a' + 1;
		ey = e[1] - '0';
		
		memset(sign, 0, sizeof(sign));
		
		if(sx==ex&&sy==ey)
        {
            printf("To get from %s to %s takes %d knight moves.\n", s,e,0);
            continue;
        }
        bfs(); 
	}
	return 0;
}
