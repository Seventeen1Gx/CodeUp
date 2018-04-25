// 博弈论，每一步都是最佳选择，所以不用一个个判断，应该直接得出答案的题型
// 对于两个数 a, b	假定 a>b 
// 1.a%b == 0 先手者赢
// 2. b < a < 2b  只能 b-a,然后开始新一轮判断
// 3. a>2b  当a%b,b必输时，放一波,取a%b + b,b,这时回到2,然后你赢（参考网上分析） 
#include <stdio.h>

int judge(int a, int b)
{
	if (a%b == 0 || a > 2*b)
		return 1;				//当前选手获胜
	return 0;					//换人进行下一次判断 
}

int main()
{
	int a, b, c;
	bool player;
	
	scanf("%d %d", &a, &b);
	while (a!=0 || b!=0) {
		player = true;
		if (b > a) {
			c = b;
			b = a;
			a = c;
		}
		
		int flag = judge(a, b);
		while (!flag) {
			player = !player;
			c = a - b;
			a = b;
			b = c;
			flag = judge(a, b);
		}
		if (player)
			printf("xiaoming wins\n");
		else
			printf("xiaohong wins\n");
		scanf("%d %d", &a, &b);
	} 
	
	return 0;
} 
 
