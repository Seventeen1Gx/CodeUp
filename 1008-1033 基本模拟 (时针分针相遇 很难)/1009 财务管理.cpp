# include <stdio.h>

int main()
{
	double month_salary, sum = 0;
	
	int i=0;
	while ( i<12 ) {
		scanf("%lf", &month_salary);
		sum += month_salary;
	}
	
	printf("гд%.2f\n", sum/12);
	return 0;
}
