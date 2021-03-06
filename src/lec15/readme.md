# 欧拉函数

## 基本理论
- 定义1：定义在所有的正整数上的函数称为算数函数
- 定义2：算数函数f如果满足任意两个互素的正整数n和m，均有f(nm)=f(n)f(m)，就称为乘性函数（积性函数）。如果对任意两个
正整数n和m，均有f(mn)=f(m)f(n)，就称为完全乘性（完全积性）函数
- 定理1：如果f是一个乘性函数，对任意整数n有素数幂分解，n=p1^a1*p2^a2*...ps^as,
 那么f(n)=f(p1^a1)*f(p2^a2)*...*f(ps^as)
- 定理2：如果p是素数，那么phi(p)=p-1;反之，如果p是一个正整数且满足phi(p)=p-1,那么p是素数
- 定理3：如果p是素数，a是一个正整数，那么phi(p^a)=p^a-p^(a-1)
- 定理4：如果m和n是互素的正整数，那么phi(mn)=phi(m)phi(n)
- 定理5：设n=p1^a1*p2^a2*...pk^ak为正整数n的素数分解，那么
phi(n)=n(1-1/p1)(1-1/p2)...(1-1/pk)

