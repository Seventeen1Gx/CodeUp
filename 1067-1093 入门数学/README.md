# 从一些题目中得到的启发

- [1073 2^x mod n = 1](http://codeup.cn/problem.php?id=1073)

**相关数论知识**

> 满足a^x ≡ 1(mod n)的最小正整数x称为a模n的阶。

> 对于整数a、p如果存在整数b，满足a * b mod p = 1则称b是a的模P乘法逆元。 
>
> a存在模P的乘法逆元的充要条件是gcd(a, p) = 1。

对于本题可令 a = 2^x，b = 1，p = n。所以当n的值为1或偶数时，不存在x使得2^x mod n=1，其它情况则必存在一x使得2^x mod n =1。 