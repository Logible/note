#define MAX_TREE_SIZE 100 //树中最多结点树

typedef struct
{
    ElemType data; //数据元素
    int parent;    //双亲位置域
} PTNode;

typedef struct //树的类型定义
{
    PTNode nodes[MAX_TREE_SIZE]; //双亲表示
    int n;                       //结点数
} PTree;

- 拐点的必要条件
  - 设y =f(x)在点$x_0$处可导, 且$x_0$为f(x)的拐点点,则$f'(x_0) = 0$

1. 第一充分条件
   1. 若$f'(x_0)=0$(或$f(x)在x_0$连续), 且在$x_0$的某去心领域$\mathring{U}(x_0, \delta)$可导
      1. $f^{'-}(x_0)>0, f^{'+}(x_0)<0$, 极大值
      2. $f^{'-}(x_0)<0, f^{'+}(x_0)>0$, 极小值
      3. 不变, 无拐点
2. 第二充分条件
   1. $f'(x_0) = 0, f''(x_0) \neq 0$, 则f(x)在$x_0$取得拐点
      1. $f''(x_0) > 0$, 极小值
      1. $f''(x_0) < 0$, 极大值
3. 第三充分条件
   1. 若$f'(x_0) = f''(x_0) = \dots = f^{n-1}(x_0)=0, f^{n}(x_0) \neq 0$
      1. n为偶数, 有拐点
         1. $f^{n}(x_0) > 0$, 极小值
         2. $f^{n}(x_0) < 0$, 极大值
      1. n为奇数, 无拐点