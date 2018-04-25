#include <stdio.h>
//用双亲表示法的树形结构描该亲属关系，存储在一位数组中
//下标表示节点标号，元素值表示其父亲标号
//然后看两人在树中谁距离根节点更远，远的辈分小，相同则同辈 

//清空数组 
void clear(int a[], int n)
{
	for (int i=0; i<n; i++)
		a[i] = 0;
}

int main()
{
	int father[21];
	int a, b, n;
	int cnt1, cnt2;
	
	while (scanf("%d", &n) != EOF)	{
		clear(father, 21);
		cnt1 = cnt2 = 0;
		for (int i=0; i<n; i++) {
			scanf("%d %d", &a, &b);
			father[a] = b;
		}
		
		
		//看两人距根节点有多远 
		a = 1;
		while ( father[a] ) {	
			a = father[a];
			cnt1++;
		}
		
		a = 2;
		while ( father[a] ) {
			a = father[a];
			cnt2++;
		}
		
		if (cnt1>cnt2)
			printf("You are my elder\n");
		else if (cnt1<cnt2)
			printf("You are my younger\n");
		else
			printf("You are my brother\n");			
	}
	
	return 0;
}
