# 从一些题目中得到的启发

* [1058 寻找独一无二的数](http://codeup.cn/problem.php?id=1058)

异或操作，对两操作数的二进制形式的各位相异或结果：同零异一。

```c
a ^ b = b ^ a			//交换律
(a^b)^c = a^(b^c)
```

本题所给n个数中，除了独一无二的数，其余的数都出现了偶数次。

所以`result = n1 ^ n2 ^ n3 ^ …… ^ nn`。

- [1064 小明养猪的故事](http://codeup.cn/problem.php?id=1064)

如下图，这是一个斐波那契数列问题。

![](https://github.com/Seventeen1Gx/BlogPicture/raw/master/CodeUp/%E4%B8%80%E4%BA%9B%E5%9B%BE%E7%A4%BA/%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97.png)

