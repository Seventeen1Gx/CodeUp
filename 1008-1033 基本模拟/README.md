# 从一些题目中得到的启发

- [1008 ASCII码](http://codeup.cn/problem.php?id=1008)

C语言中变量代表的是内存中的一块空间，存的都是机器码，如何解释要看变量类型。

本题中从整数到字符，其实机器码上都是一样的，只是解释不同。以下代码即可完成本题转换。

```c
scanf("%d", &c);	//按整数值读入
printf("%c", c);	//将整数值解释为字符输出（ASCII字符集）
```

* [1010 平均绩点](http://codeup.cn/problem.php?id=1010)

本题使用了一个在《C程序设计语言》（K&R）中出现的一个函数：

```c
//从输入中读取一行至s[]，且保留末尾换行符，返回读入的字符数，读入字符上限是lim
int getline(char s[], int lim)
{
	int c, i;
	
	for ( i=0; i<lim-1 && (c = getchar()) != EOF && c!='\n'; ++i )
		s[i] = c;
	
	if (c == '\n') {	//录入末尾换行符 
		s[i] = c;
		i++;
	}
	s[i] = '\0';	//末尾添加结束标记 
	
	return i;
}
```

* [1014 当总统](http://codeup.cn/problem.php?id=1014)

对于整数n，无论奇偶，超过其一半的最小整数是 (n+2)/2 。

* [1030 日历本](http://codeup.cn/problem.php?id=1030)

本题使用了蔡氏公式（[百度百科](https://baike.baidu.com/item/%E8%94%A1%E5%8B%92%E5%85%AC%E5%BC%8F/10491767?fr=aladdin)），给出年月日即可知道该年月日是星期几。

```c
int Zeller(int year, int month, int day)
{
	if(month==1||month==2) {　
		year--;
		month+=12;
	}
	
	int c = year/100;
	int y = year-c*100;
	int week = (c/4)-2*c+(y+y/4)+(13*(month+1)/5)+day-1;
	while (week<0) { 
		week += 7;
	}
	week %= 7;
	return week;		////0代表周日，1代表周一，依次类推
}
```

* [1031 [M] 时钟](http://codeup.cn/problem.php?id=1031)

时钟上，分针的角速度是6°/min，时针的角速度是0.5°/min，当起始时针分针重合时，下一次重合所需要时间间隔为360/(6-0.5)分钟。（**从重合到追及所用时间为分针比时针多走的360°除以二者速度差**）

12小时制下，时刻一到时刻二越过12点的情况，可让时刻二的小时数加12，如：

11：30 PM 至 3：20 AM 看成 11：30 至 15：20，然后统一换成距离0点0分的分钟数，最后计算相差分钟数。

小技巧：计算多单位下数值的差值时，统一到同一单位，再计算差值。
