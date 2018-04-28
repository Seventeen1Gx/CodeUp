# 从一些题目中得到的启发

- [1039 词组缩写](http://codeup.cn/problem.php?id=1039)

对于文本处理中的单词问题，我习惯于定义一个表示状态的变量，

```c
#define IN 1
#define OUT 0
int state = OUT;		//初值为OUT，表示在单词外
```

state用于在字符数组按序遍历时，跟踪当前访问位置，当`state = OUT`表示在单词外，当`state = IN`表示在单词内。条件`state == OUT && isalpha(s[i]) == true`满足时，说明此时进入一个单词，将state置为IN，条件`state == IN && isalpha(s[i]) == false`满足时，说明此时离开一个单词，state置为OUT。

* [1045 讨厌的小数点](http://codeup.cn/problem.php?id=1045)

`strlen()`判断字符串长度是根据末尾的\0来识别字符串的结束的。

本题一个比较重要的点是，如果询问的小数点后位数大于已有的位数，那就视为0。如对于1.345，小数点后1位是3，2位是4，3位是5，4位且4位之后是0。

`scanf()`录入字符串是会在结尾自动加上\0，本题要将其换成字符0，即'0'。