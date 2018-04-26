//�л��ͻ��յ��ظ��İ� 
//ʹ�ò��鼯����ʼ��N������ ���ϲ�һ����һ�� 
//ֻ�� m = n - 1 ʱ���п�����ȷ���ٱز���ͨ������л� 
#include <stdio.h>
#include <string.h>

int pre[1005];			//��1��ʼ�Խ���� 
int cnt;				//������ 
int loopFlag; 

int Find(int x)
{
	while ( pre[x] > 0)
		x = pre[x];
	return x;			//���ظ��ı�� 
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
