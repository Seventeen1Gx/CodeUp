#include <stdio.h>    

int main()
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	
	while (a!=0 || b!=0 || c!=0 || d!=0 || e!=0) {
		
		//判断是哪种数列 
		int type = 0;
		if ( (b-a)==(c-b) && (c-b) == (d-c) && (d-c) == (e-d) ) {
			 type = 1;
		} else if ( (1.0*b/a)==(1.0*c/b) && (1.0*c/b) == (1.0*d/c) && (1.0*d/c) == (1.0*e/d) ) {
			type = 2;
		} else
			type = 3;
		
		int intval, q, f;
		switch (type) {
			//等差数列 
			case 1:
				intval = b-a;
				for (int i=1; i<=5; i++)
					if(i==1)
						printf("%d", e + i * intval);
					else
						printf(" %d", e + i * intval);
				break;
			//等比数列 
			case 2:
				q = b/a;
				for (int i=1; i<=5; i++) {
					e *= q;
					if(i==1)
						printf("%d", e );
					else
						printf(" %d", e );
				}
				break;
			//斐波那契数列	
			case 3: 
				for (int i=1; i<=5; i++) {
					f = d + e;
					d = e;
					e = f;
					if(i==1)
						printf("%d", f );
					else
						printf(" %d", f );
				}
				break;
		}
		printf("\n");
		
		scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	}
	
	return 0;
}
