#include <stdio.h>

struct Rectangle {
	double x1, y1, x2, y2;
};

int check(Rectangle r1, Rectangle r2)  //r1ÊÇ·ñ°üº¬r2 
{
	if (r2.x1 >= r1.x1 && r2.y1 >= r1.y1 && r2.x2 <= r1.x2 && r2.y2 <= r1.y2)
		return 1;
	return 0;
}

int main()
{
	Rectangle r[100];
	int n, cnt;
	
	while (scanf("%d", &n) != EOF) {
		cnt = 0;
		for (int i = 0; i < n; i++) 
			scanf("%lf%lf%lf%lf", &r[i].x1, &r[i].x2, &r[i].y1, &r[i].y2);
			
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) 
				if (i != j) {
					if(check(r[j], r[i])) {
						cnt++;
						break;
					}
				}
				
		printf("%d\n", cnt);
	}
	return 0;
}
