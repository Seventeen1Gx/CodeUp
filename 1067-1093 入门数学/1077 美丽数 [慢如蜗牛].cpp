#include <stdio.h>

int main()
{
	int n;
	
	while ( scanf("%d", &n) == 1 ) {
		int cnt=0;
		//threeʼ�ձ���3�ı�����fiveʼ�ձ���5�ı���
		//�������Ǵ�С��������Ѱ�ҵ� 
		int three = 3, five = 5;
		
		while (1) {
			//����three��five�еĽ�С�� 
			if( three<five ) {					//three��С 
				cnt++;							//three�ǵ�cnt�������� 
				if(cnt==n) { 
					printf("%d\n", three);
					break;
				}
				three += 3;						//��С��three���ӵ���һ��3�ı��� 
			} else if ( three>five ) {							//five��С 
				cnt++;							//five�ǵ�cnt��������
				if(cnt==n) {
					printf("%d\n", five);
					break;
				}
				five += 5;						//��С��five���ӵ���һ��5�ı��� 
			} else {							//�������ʱ 
				cnt++;
				if (cnt==n) {
					printf("%d\n", three);
					break;
				}
				three += 3;						//���߶����ӵ���һ���� 
				five += 5;
			}
		}
	}
	
	return 0;
}
