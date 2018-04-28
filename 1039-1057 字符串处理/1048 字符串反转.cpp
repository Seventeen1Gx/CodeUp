#include <stdio.h> 
#define IN 1
#define OUT 0
//����ѱ�����Ҳ����һ����������ⵥ���Կո�ֿ� 

//������s��front��rear�Ĳ��ַ�ת 
void reverse(char s[], int front, int rear)
{
	char t;
	while ( front<rear ) {
		t = s[front];
		s[front] = s[rear];
		s[rear] = t;
		front ++;
		rear --;
	}
}

//����ĿҪ���� 
void processing(char s[])
{
	int i, start, end;
	
	//state��ʶָ������λ�ã������ڻ򵥴��⣬��ʼΪ������ 
	int state = OUT;
	for (i=0; ; i++) { 
		if( state==OUT && s[i] != ' ' ) {		//��ʱs[i]Ϊ��������ĸ 
			state = IN;							//���뵥�ʣ��ı�״̬ 
			start = i;							//���µ�����ʼλ�� 
		} else if ( state==IN && (s[i] == ' ' || s[i] == '\0') ) {		//��ʱs[i]Ϊ����ĩ��ĸ�ĺ�һλ 
			state = OUT;						//�ı��ʱ״̬ 
			end = i - 1;						//���µ��ʽ���λ�� 
			reverse(s, start, end);				//��һ��������������ת 
		}
		//������֮���ٿ���û�б������ 
		if( s[i] == '\0' ) 
			return;
	}
}

int
main()
{
	int t;
	scanf("%d", &t);
	getchar();				//���ջ��������з� 
	
	char s[1001];
	
	while (t--) {
		gets(s);
		processing(s);
		puts(s);	
	}
	
	return 0;
}
