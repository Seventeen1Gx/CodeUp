#include <stdio.h>
#include <math.h>

struct Rectangle {
	double x1, y1, x2, y2;
	double area;
	bool isContained;
};

int check(Rectangle r1, Rectangle r2)  //r1是否包含r2 
{
	if (r2.x1 >= r1.x1 && r2.y1 >= r1.y1 && r2.x2 <= r1.x2 && r2.y2 <= r1.y2) {
		if (fabs(r1.area - r2.area) < 1e-8)
			return 2;
		else 
			return 1;
	}
	return 0;
}

void insertionSort(Rectangle r[], int n)
{
	Rectangle temp;
	int j;
	for (int i = 1; i < n; i++) {
		temp = r[i];
		j = i - 1;
		while (j >= 0 && r[j].area - temp.area > 1e-8) {
			r[j+1] = r[j];
			j--;
		}
		r[j+1] = temp;
	}
}

void countContain(Rectangle r[], int n)   //有n个元素的Rectangle面积升序数组 
{	
	for (int i = n-2; i >= 0; i--) {	 //0到n-2判别是否被别人包含 
		for (int j = n-1; j > i; j--) {		//从最大的开始看 
			int flag = check(r[j], r[i]);
			if (flag == 2) {
				r[i].isContained = 1;
				r[j].isContained = 1;
				break;
			}	
			else if (flag == 1) {
				r[i].isContained = 1;
				break;
			}
		}
	}
}

int main()
{
	Rectangle r[100];
	int n, cnt;
	
	while (scanf("%d", &n) != EOF) {
		cnt = 0;						 
		for (int i = 0; i < n; i++) {
			scanf("%lf%lf%lf%lf", &r[i].x1, &r[i].x2, &r[i].y1, &r[i].y2);
			r[i].area = (r[i].x2 - r[i].x1) * (r[i].y2 - r[i].y1);
			r[i].isContained = 0;				
		}
		insertionSort(r, n);
		countContain(r, n);
		
		for (int i = 0; i < n; i++) {
			if (r[i].isContained)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}
