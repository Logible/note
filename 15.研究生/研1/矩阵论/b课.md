# b课

- [b课](#b课)
  - [预备知识](#预备知识)
    - [分布](#分布)
    - [边缘分布和条件分布](#边缘分布和条件分布)
  - [第2章 随机过程的基本概念和基本类型](#第2章-随机过程的基本概念和基本类型)
    - [随机过程的数字特征的计算](#随机过程的数字特征的计算)
    - [作业](#作业)
  - [第3章 泊松](#第3章-泊松)
    - [Poission过程](#poission过程)
    - [3.2 Poisson过程相联系的若干分布](#32-poisson过程相联系的若干分布)
    - [事情发生时刻的条件分布](#事情发生时刻的条件分布)
    - [3.3 Poisson过程的推广](#33-poisson过程的推广)
  - [Markov](#markov)
  - [C-K](#c-k)
  - [状态的分类及性质](#状态的分类及性质)
    - [5.3 极限定理](#53-极限定理)
    - [平稳分布](#平稳分布)

## 预备知识

- 事件的表示和运算
  - ![Alt text](images/image-36.png)
- ![Alt text](images/image-37.png)
  - ![Alt text](images/image-38.png)

- 古典
  - ![Alt text](images/image-39.png)
  - ![Alt text](images/image-40.png)
- 几何
  - ![Alt text](images/image-41.png)
  - ![Alt text](images/image-42.png)
  - ![Alt text](images/image-43.png)
- 不同定义
  - ![Alt text](images/image-44.png)

- 事件域
  - ![Alt text](images/image-45.png)
- 概率
  - ![Alt text](images/image-46.png)
  - ![Alt text](images/image-47.png)
- 概率的基本性质
  - ![Alt text](images/image-48.png)

### 分布

- 随机变量
  - ![Alt text](images/image-49.png)
  - ![Alt text](images/image-50.png)
  - ![Alt text](images/image-51.png)
- 随机变量的类型
  - $V(x)= E(X^2)-\mu^2$
  - $V(x)= E[(X-\mu)^2]$
  - ![Alt text](images/image-52.png)
  - 离散型
    - 两点分布
      - ![Alt text](images/image-57.png)
    - 二项分布
      - ![Alt text](images/image-53.png)
      - ![Alt text](images/image-54.png)
    - Poisson
      - ![Alt text](images/image-55.png)
      - ![Alt text](images/image-56.png)
  - 连续型
    - 均匀分布
      - ![Alt text](images/image-58.png)
      - ![Alt text](images/image-59.png)
    - 正态分布
      - ![Alt text](images/image-60.png)
      - ![Alt text](images/image-61.png)
      - ![Alt text](images/image-62.png)
      - ![Alt text](images/image-63.png)
      - ![Alt text](images/image-64.png)
    - 指数分布
      - ![Alt text](images/image-65.png)
      - ![Alt text](images/image-66.png)
    - 帕累托分布
      - ![Alt text](images/image-67.png)
      - ![Alt text](images/image-68.png)

### 边缘分布和条件分布

- 多维随机变量
  - ![Alt text](images/image-69.png)
  - ![Alt text](images/image-70.png)
  - ![Alt text](images/image-71.png)
- 边缘分布
  - ![Alt text](images/image-72.png)
  - ![Alt text](images/image-73.png)
  - 离散的情形
    - ![Alt text](images/image-75.png)
    - ![Alt text](images/image-74.png)
    - ![Alt text](images/image-77.png)
  - 连续的情形
    - ![Alt text](images/image-76.png)
- 条件分布
  - ![Alt text](images/image-78.png)
  - ![ ](images/image-79.png)
  - 条件数学期望
    - ![Alt text](images/image-80.png)
    - ![Alt text](images/image-81.png)
    - 重期望公式
      - 随机变量的函数,也是随机变量
      - ![Alt text](images/image-82.png)
      - ![Alt text](images/image-83.png)
      - 例子
        - ![Alt text](images/image-84.png)
        - ![Alt text](images/image-85.png)

## 第2章 随机过程的基本概念和基本类型

- 定义
  - ![Alt text](images/image-86.png)
  - 例子
  - ![Alt text](images/image-87.png)
- ![Alt text](images/image-88.png)
- 状态空间
  - 对于扔硬币，即0和1
  - ![Alt text](images/image-89.png)

- 随机过程举例
  - ![Alt text](images/image-90.png)
  - ![Alt text](images/image-91.png)
  - ![Alt text](images/image-92.png)

### 随机过程的数字特征的计算

- 随机过程的数字特征的计算
  - ![Alt text](images/image-93.png)
  - 例子
    - 和的方差等于方差的和，独立时成立
      - ![Alt text](images/image-94.png)
    - 乘积的期望都就等于期望的乘积，独立时成立
      - ![Alt text](images/image-95.png)

### 作业

- 一维概率密度⭐
  - ![Alt text](images/image-96.png)
- ![Alt text](images/image-98.png)
- ![Alt text](images/image-99.png)

## 第3章 泊松

- 平稳过程
  - ![Alt text](images/image-100.png)
  - 宽平稳
    - ![Alt text](images/image-101.png)
    - ⭐均值/方差存在$\to$二阶矩过程
    - 例子1
      - 相互独立的随机变量, 乘积的期望等于期望的乘积
      - ![Alt text](images/image-102.png)
    - 例子2
      - 求函数时，把时间参数当作常数
      - ![Alt text](images/image-103.png)
      - ![Alt text](images/image-104.png)
      - ![Alt text](images/image-105.png)
- 独立增量过程,平稳增量过程
  - ![Alt text](images/image-106.png)
  - ![Alt text](images/image-107.png)

### Poission过程

- 计数过程
  - ![Alt text](images/image-108.png)
  - ![Alt text](images/image-109.png)
- Poission过程
  - ![Alt text](images/image-110.png)
  - 例子3.1.1
    - ![Alt text](images/image-111.png)
  - 例子3.1.2
    - ![Alt text](images/image-112.png)
- 定义3.2'
  - ![Alt text](images/image-113.png)

### 3.2 Poisson过程相联系的若干分布

- poisson
  - ![Alt text](images/image-114.png)
- 指数函数
  - ![Alt text](images/image-115.png)
  - 无记忆性
    - ![Alt text](images/image-116.png)

- Poisson过程相联系的若干分布
  - ![Alt text](images/image-117.png)
  - ![Alt text](images/image-118.png)
  - ![Alt text](images/image-119.png)
- 第三個定义
  - ![Alt text](images/image-120.png)
  - ![Alt text](images/image-121.png)
  - 例题
    - ![Alt text](images/image-122.png)

### 事情发生时刻的条件分布

- ![Alt text](images/image-123.png)
- 顺序统计量
  - ![Alt text](images/image-124.png)
- 定理3.4
  - ![Alt text](images/image-125.png)
  - ![Alt text](images/image-126.png)
  - 例子3.7
    - ![Alt text](images/image-127.png)
    - ![Alt text](images/image-128.png)

### 3.3 Poisson过程的推广

- 非齐次Poisson过程（$\lambda$变化
  - ![Alt text](images/image-129.png)
  - ![Alt text](images/image-130.png)
- 定义3.3.1
  - ![Alt text](images/image-131.png)
  - ![Alt text](images/image-132.png)
  - ![Alt text](images/image-133.png)
- 复合Poisson过程（增加个数
  - ![Alt text](images/image-134.png)
  - 例3.3.2
    - ![Alt text](images/image-135.png)
  - 例3.3.3
    - ![Alt text](images/image-136.png)
- 定理3.3.2
  - ![Alt text](images/image-137.png)
  - 例子1
    - ![Alt text](images/image-138.png)
  - 例子2
    - ![Alt text](images/image-139.png)
    - ![Alt text](images/image-140.png)
    - ![Alt text](images/image-141.png)
- 3.3.3 条件Poisson过程（$\lambda$是
  - ![Alt text](images/image-142.png)
  - ![Alt text](images/image-143.png)
  - 定理3.3.3
    - ![Alt text](images/image-144.png)
  - example
    - ![Alt text](images/image-145.png)
    - ![Alt text](images/image-146.png)

## Markov

- 定义  
  - ![Alt text](images/image-153.png)
- 定义5.1.1
  - ![Alt text](images/image-154.png)
- 定义5.1.2
  - ![Alt text](images/image-155.png)
- 转移概率矩阵
  - ![Alt text](images/image-156.png)
  - ![Alt text](images/image-157.png)
- 例子5.1.1
  - ![Alt text](images/image-158.png)
- 例子2
  - ![Alt text](images/image-159.png)
- 例子3
  - ![Alt text](images/image-160.png)
- 例子4
  - ![Alt text](images/image-161.png)
- 例子5
  - ![Alt text](images/image-162.png)
- 例子6
  - ![Alt text](images/image-163.png)
  - ![Alt text](images/image-164.png)
- 定义5.1.5
  - ![Alt text](images/image-165.png)
- 例子7
  - ![Alt text](images/image-166.png)
  - ![Alt text](images/image-167.png)
  - ![Alt text](images/image-168.png)

## C-K

- C-K
  - ![Alt text](images/image-169.png)
  - ![Alt text](images/image-170.png)
- 例子1
  - ![Alt text](images/image-171.png)
  - ![Alt text](images/image-172.png)
- 例子2
  - ![Alt text](images/image-173.png)
  - ![Alt text](images/image-174.png)
- 例子3
  - ![Alt text](images/image-175.png)
  - ![Alt text](images/image-176.png)
  - ![Alt text](images/image-177.png)

## 状态的分类及性质

- ![Alt text](images/image-178.png)
- n步转移矩阵
  - ![Alt text](images/image-179.png)
  - ![Alt text](images/image-180.png)
  - ![Alt text](images/image-181.png)
- 定义5.2.1
  - ![Alt text](images/image-182.png)
  - ![Alt text](images/image-183.png)
- 定义5.2.2
  - ![Alt text](images/image-184.png)
- 例子5.2.1
  - ![Alt text](images/image-185.png)
- 定义5.2.3（周期性
  - ![Alt text](images/image-186.png)
- 例子5.2.2
  - ![Alt text](images/image-187.png)
  - 定理
    - ![Alt text](images/image-188.png)
- 常返性
  - ![Alt text](images/image-189.png)
  - 注：![Alt text](images/image-190.png)
    - ![Alt text](images/image-192.png)
- ![Alt text](images/image-193.png)
- 例子5.2.3
  - ![Alt text](images/image-194.png)
  - ![Alt text](images/image-195.png)
  - ![Alt text](images/image-196.png)
  - ![Alt text](images/image-197.png)
- 定理5.2.4
  - ![Alt text](images/image-198.png)

### 5.3 极限定理

- ![Alt text](images/image-199.png)
- 例子
  - ![Alt text](images/image-200.png)
  - ![Alt text](images/image-201.png)
- 定理5.3.1
  - ![Alt text](images/image-202.png)
- 定理5.3.2
  - ![Alt text](images/image-203.png)
- 推论5.3.3
  - 不可约的马尔可夫所有状态都一致
  - ![Alt text](images/image-204.png)
    - ![Alt text](images/image-205.png)
- 例子
  - ![Alt text](images/image-207.png)

### 平稳分布

- ![Alt text](images/image-208.png)
- ![Alt text](images/image-209.png)
- 定义5.3.2
  - ![Alt text](images/image-210.png)
- 定理5.3.3
  - ![Alt text](images/image-211.png)
- 例子
  - 遍历的markov
    - 状态有限
    - 全部相通
    - 周期为1
  - ![Alt text](images/image-212.png)
