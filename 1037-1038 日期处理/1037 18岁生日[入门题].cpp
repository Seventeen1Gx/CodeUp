#include <stdio.h>
const int AGE = 18;
//�ӳ�����18�����յ�ʱ��ɷ�Ϊ���Σ�
//�����������+17��+18������ǰ��� 

//�ж��Ƿ����� 
bool isLeap(int year)
{
	if (year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	int year, month, day;
	int sum;
	
	while (t--) {
		sum = 0;
		scanf("%d-%d-%d", &year, &month, &day);
		
		//���������꣬18��������� 
		if(!isLeap(year+AGE) && month==2 && day==29 ) {
			printf("%d\n", -1);
			continue;
		}
		
		//����18�����18��365 
		sum = AGE * 365; 
		
		//����������������
		//�ȿ����������м�17�� 
		for (int i = year+1; i < year+AGE; i++)
			if (isLeap(i)) 
				sum += 1;
		
		//�ٿ����������յ���ĩ��ĩ�����������������ʱ�� 
		if (month == 1 || (month == 2 && day < 29)) {	//�������յ���ĩ���ܰ���2��29�� 
			if (isLeap(year))							//�Ӷ����������꣬���һ�� 
				sum++;
		} else										//18��������������տ��ܰ���2��29 
			if (isLeap(year+AGE))					//�Ӷ���18���������꣬���һ�� 
				sum++;
		
		printf("%d\n", sum);
	}
	return 0;
}
