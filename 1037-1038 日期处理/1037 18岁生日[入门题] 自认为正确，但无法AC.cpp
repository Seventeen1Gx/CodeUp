#include <stdio.h>
const int AGE = 18;

//�ж��Ƿ����� 
bool isLeap(int year)
{
	if (year%4==0 && year%100!=0 || year%400==0)
		return 1;
	return 0;
}

//��start����18������� 
int Sum(int start)
{
	int sum; 
	for (int i = start; i < start+AGE; i++)
		if (isLeap(i)) 
			sum += 366;
		else 
			sum += 365;
	return sum;
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
		
		int flag;
		if (month == 1 || (month == 2 && day < 29))	//���������Ƿ����2��29 
			flag = 1;
		else										//����ĩ���Ƿ����2��29 
			flag = 0;
				
		//���������
		if (flag)
			sum = Sum(year);		//�ӳ����꿪ʼ�� 
		else
			sum = Sum(year+1);		//�ӳ������һ�� 
		 
		
		printf("%d\n", sum);
	}
	return 0;
}
