# CodeUp
本仓库为[Codeup墓地](http://codeup.cn/)中编程题详细解题代码以及必要的解析

（一些必要提示在代码注释中，带M标志的有详细解析）

本人水平有限，所以只求AC，在时间和空间上未能考虑优化。如有错误，恳请原谅。

也欢迎各位如有更好的代码和解题方案，在本仓库提出修改请求。

更新情况：已更新至题号**1115**。

# 黑盒测试

网上的在线OJ系统采用的黑盒测试分为：

- 单点（多次运行，一次运行测试一组样例）
- 多点（一次运行，运行后循环测试多组样例）

本仓库所用网站[codeup.cn](codeup.cn)采用的是多点黑盒测试。

具体分为以下类型

1. while……EOF

题目未给出输入结束条件。

```c
while ( scanf("&d", &n) != EOF ) {
    // To do something
}
```

注：函数scanf()的返回值是按照给定格式字符串正确录入缓存区的参数个数（int值）。当在录入时遇到匹配不正确的参数时，录入就直接终止，返回已正确录入的参数个数。当发现录入值是EOF时，返回也是EOF（一般其值为-1）。EOF在控制台可用ctrl+z表示。

EOF只能出现在第一个录入参数，否则程序中断。

2. 对于字符串的输入

```c
while ( scanf("%s", str) != EOF ) {
    // To do something
}
while ( gets(str) != EOF ) {
    // To do something
}
```

注：scanf()和gets()都可以用来输入字符串，但在使用上有所差别。

gets()以回车结束读取，使用'\0'结尾，回车符'\n'被舍弃没有遗留在缓冲区。

scanf()以空格或回车符结束读取，空格或回车符会遗留在缓冲区。

3. while……break

题目给出了输入结束的条件，如n=0时结束输入。

4. while ( t-- )

题目给出了测试数据的组数

# 常见解题错误

1. 用scanf处理字符或字符串时，忽视遗留在缓存区的空白符。
2. C语言中，对于浮点数输入时的占位符是%lf，输出是%f。