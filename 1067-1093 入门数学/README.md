# 从一些题目中得到的启发

- [1073 2^x mod n = 1](http://codeup.cn/problem.php?id=1073)

**相关数论知识**

> 满足a^x ≡ 1(mod n)的最小正整数x称为a模n的阶。

> 对于整数a、p如果存在整数b，满足a * b mod p = 1则称b是a的模P乘法逆元。 
>
> a存在模P的乘法逆元的充要条件是gcd(a, p) = 1。

对于本题可令 a = 2^x，b = 1，p = n。所以当n的值为1或偶数时，不存在x使得2^x mod n=1，其它情况则必存在一x使得2^x mod n =1。 

- [1079 找新朋友](http://codeup.cn/problem.php?id=1079)

在数论，对正整数n，欧拉函数是小于n的正整数中与n互质的数的数目（φ(1)=1）。

下图来自百度百科：

![](https://github.com/Seventeen1Gx/BlogPicture/raw/master/CodeUp/%E4%B8%80%E4%BA%9B%E5%9B%BE%E7%A4%BA/%E6%AC%A7%E6%8B%89%E5%87%BD%E6%95%B0.png)

本题代码中用到下面这句话：

> 每个正整数都能够以唯一的方式表示成它的质因数的乘积。

