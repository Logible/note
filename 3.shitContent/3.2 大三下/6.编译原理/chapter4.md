# chapter 4

- [chapter 4](#chapter-4)
  - [Some concept](#some-concept)
  - [某些非LL(1)文法到LL(1)文法的等价变换](#某些非ll1文法到ll1文法的等价变换)
  - [表驱动LL(1)分析程序](#表驱动ll1分析程序)

怎么判断是不是LL(1)⭐

- 是否为空,first,follow⭐

- 证明不是LL(1)⭐

- 某些非LL(1)文法到LL(1)文法的等价变换⭐

      - 左递归(可以将左递归变为直接左递归，然后再消除左递归)⭐
      - or 提取左公共因子⭐

- 已经是LL(1)
      - 构造程序: 预测分析表，查表

## Some concept

- LL(1)文法

  L：从左向右推导
  L：最左推导
  1：每次向前看一个字符

  对于每个非终结符A的两个产生式A->a, A->β，满足：

  $SELECT(A->a) \cap SELECT(A->β) = \phi$

- Frist(a)：首符号集

  即找最左边可能出现的终结符

⭐

求first例子：

![20220604213053](https://raw.githubusercontent.com/Logible/Image/main/note_image/20220604213053.png)

- Follow(A) 后跟符号集

  即找出该非终结符后面所跟随的所有终结符

  1. $\# \in Follow(S)$, S为识别符号
  2. 若存在规则V -> xWy, $First(y)-{ε} \in Follow(W)$
  3. 若存在规则V -> xW 或 V -> xWy，其中y**=>ε，则$Follow(V) \in Follow(W)$

- SELECT(A->a) 选择符号集

  1. a!*=>ε SELECT(A->a) = First(a)
  2. a**=>ε SELECT(A->a) = (First(a) - {ε}) ∪ Follow(A)

## 某些非LL(1)文法到LL(1)文法的等价变换

1. 提取左公共因子

     一般形式：$A-> αβ_1 | αβ_2 | αβ_3|\dots| αβ_n$

     提$A—>α(β_1|β_2|β_3|\dots|β_n)$

     $A->αA'$

     $A'-> β_1|β_2|β_3|\dots|β_n$

2. 消除左递归

      将$A -> Aα_1|Aα_2|\dots|Aa_m|β_1|β_2|\dots|β_n$

      改写为：

      $A->β_1 A'|β_2 A'|\dots|β_n A'$

      $A'-> a_1 A'|a_2 A'|\dots|a_m A'|\varepsilon$

      ⭐⭐⭐

      ![20220605121632](https://raw.githubusercontent.com/Logible/Image/main/note_image/20220605121632.png)

## 表驱动LL(1)分析程序

基本思想：从左到右扫描输入符号串，同时从识别符号开始生成最左推导，向前看一个符号，以确定当前应选择哪一条规则

构造预测分析表

1. 对文法的每个规则U->u，执行2和3
2. 对于每个终结符，$a \in First(u)$, 让

    A[U,a] = 'U->u';

3. 如果$\varepsilon \in First(u)$,则对Follow(U)中的每个终结符b 或 #，让

    A[U,b] = 'U->u' 或 A[U,#] = 'U->u';

4. 将A的每个未定义元素置为ERROR
