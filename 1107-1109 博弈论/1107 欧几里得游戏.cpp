// �����ۣ�ÿһ���������ѡ�����Բ���һ�����жϣ�Ӧ��ֱ�ӵó��𰸵�����
// ���������� a, b	�ٶ� a>b 
// 1.a%b == 0 ������Ӯ
// 2. b < a < 2b  ֻ�� b-a,Ȼ��ʼ��һ���ж�
// 3. a>2b  ��a%b,b����ʱ����һ��,ȡa%b + b,b,��ʱ�ص�2,Ȼ����Ӯ���ο����Ϸ����� 
#include <stdio.h>

int judge(int a, int b)
{
	if (a%b == 0 || a > 2*b)
		return 1;				//��ǰѡ�ֻ�ʤ
	return 0;					//���˽�����һ���ж� 
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
 
