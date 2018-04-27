# 从一些题目中得到的启发

- [1039 词组缩写](http://codeup.cn/problem.php?id=1039)

对于文本处理中的单词问题，我习惯于定义一个表示状态的变量，

```c
#define IN 1
#define OUT 0
int state = OUT;		//初值为OUT，表示在单词外
```

state用于在字符数组按序遍历时，跟踪当前访问位置，当`state = OUT`表示在单词外，当`state = IN`表示在单词内。条件`state == OUT && ispha(s[i]) == true`满足时，说明此时进入一个单词，将state置为IN，条件`state == IN && isalpha(s[i]) == false`满足时，说明此时离开一个单词，state置为OUT。