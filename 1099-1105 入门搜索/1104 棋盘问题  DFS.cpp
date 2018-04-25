#include <stdio.h>
#include <string.h>

int map[8][8];
int cnt;

int check(int i, int j)
{
	if (map[i][j] == -1)              //该处放不了棋子 
		return 0;
	for (int k = 0; k < i; k++)
		if (map[k][j] == 1)           //同列有棋子 
			return 0;
	return 1; 
}

void set(int n, int CurLine, int k)
{
	if (k>0 && n-CurLine>=k) {
		for(int i = 0; i < n; i++) {
			if (check(CurLine, i)) {		//能放棋子 
				map[CurLine][i] = 1;       	//放	 
				set(n, CurLine+1, k-1);		//放下一行 
				map[CurLine][i] = 0;		//恢复，循环去放看下一列 
			}
		}
		set(n, CurLine+1, k);				//本行不放,放下一行 
	} else if (k==0) {
		cnt++;
	}
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	
	while (n != -1 || k != -1) {
		memset(map, 0, sizeof(map));
		cnt = 0;
		
		char c;
		scanf("%c", &c);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%c", &c);
				if (c == '.')
					map[i][j] = -1;
			}
			scanf("%c", &c);
		}
		set(n, 0, k);
		printf("%d\n", cnt);
		scanf("%d%d", &n, &k);
	}
	return 0;
}
