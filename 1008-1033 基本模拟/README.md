# 从一些题目中得到的启发

- [1008 ASCII码](http://codeup.cn/problem.php?id=1008)

C语言中变量代表的是内存中的一块空间，存的都是机器码，如何解释要看变量类型。

本题中从整数到字符，其实机器码上都是一样的，只是解释不同。以下代码即可完成本题转换。

```c
scanf("%d", &c);	//按整数值读入
printf("%c", c);	//将整数值解释为字符输出（ASCII字符集）
```

* [1009 财务管理](http://codeup.cn/problem.php?id=1009)

C语言中，对于浮点数输入时的占位符是%lf，输出是%f。

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

