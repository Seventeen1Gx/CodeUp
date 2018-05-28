//����;߳���һ�����һ�����������ظ� 
#include <stdio.h>

//�;� 
char *tableware[4] = {
		"bowl", "knife", "fork", "chopsticks"
	};


bool Judge(char a[])
{
	int i, j;
	//�ж��Ƿ�Ϊbowl 
	for (i = 0, j = 0; tableware[0][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[0][i] != a[j])
			break;
	if(a[j] == '\0')
		return true;
		
	//�ж��Ƿ�Ϊknife
	for (i = 0, j = 0; tableware[1][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[1][i] != a[j])
			break;
	if(a[j] == '\0')
		return true;
	
	//�ж��Ƿ�Ϊfork
	for (i = 0, j = 0; tableware[2][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[2][i] != a[j])
			break;
	if(a[j] == '\0')
		return true; 
	
	//�ж��Ƿ�Ϊchopsticks
	for (i = 0, j = 0; tableware[3][i] != '\0' && a[j] != '\0'; i++, j++)
		if (tableware[3][i] != a[j])
			break;
	if(a[j] == '\0')
		return true;
	
	return false; 	
}

int main()
{
	int n;
	char a[20];
	while ( ~scanf("%d", &n) ) {

		int flag = 0;				//����Ƿ��׸�����������ʽ���ƣ�
		//¼��ÿ����������Ʒ
		for (int i = 0; i < n; i++) {
			scanf("%s", a);
			if ( Judge(a) ) {
				if (flag)
					printf(" %s", a);			//���׸��������ͷ�ӿո� 
				else {
					flag = 1;
					printf("%s", a);			//�׸��������ͷ���ӿո� 
				}
			}
		} 
		getchar();					//���ջ��������з�
		printf("\n"); 
	}
	
	return 0;		
}
