typedef int KeyType;
typedef int ElemType;
typedef struct BiTNode
{
   int weight;
   int data;
   int height;
   struct BiTnode *lchild, *rchild;
} BSTNode, *BiTree;

typedef struct
{
   ElemType *elem; //元素的存储空间基址, 建表时按实际长度分配
   int TableLen;   //表的长度
} SStable, SeqList;

BSTNode *BST_Search(BiTree T, ElemType key)
{
   while (T != NULL && key != T->data)
   {
      if (key < T->data)
         T = T->lchild; //小于,则在左子树上寻找
      else
         T = T->rchild; //大于,则在右子树上寻找
   }
   return T;
}

int BST_Insert(BiTree &T, KeyType k)
{
   if (T == NULL)
   {
      T = (BiTree)malloc(sizeof(BSTNode));
      T->data = k;
      T->lchild = T->rchild = NULL;
      return 1;
   }
   else if (K == T->data) //树中存在相同关键字的结点,插入失败
      return 0;
   else if (T < T->data)
      return BST_Insert(T->lchild, k); //插入到T的左子树
   else
      return BST_Insert(r->lchild, k); //插入到T的右子树
}

void Create_BST(BiTree &T, KeyType str[], int n)
{
   T = NULL; //初始时T为空树

   int i = 0;
   while (i < n)
   { //依次将每个关键字插入到二叉排序树中
      BST_Insert(T, str[i]);
      i++;
   }
}

void InsertSort(int A[], int n)
{
   int i, j;
   for (i = 2; i <= n; i++) //依次将A[2]~A[n]插入到已排序序列
   {
      if (A[i] < A[i - 1]) //若A[i]关键码小于其前驱, 将A[j]插入有序表
      {
         A[0] = A[i];                      //复制为哨兵,A[0]不存放元素
         for (j = i - 1; A[j] > A[0]; --j) //从后往前找待代插入位置
            A[j + 1] = A[j];               //往后挪位
         A[j + 1] = A[0];                  //复制到插入位置, 退出循环时j=0;
      }
   }
}

void InsertSort(int A[], int n)
{
   int i, j, low, high, mid;
   for (i = 2; i <= n; i++) //依次将A[2]~A[n]插入到已排序序列
   {
      A[0] = A[i]; //复制为哨兵,A[0]不存放元素
      low = 1;
      high = i - 1;

      while (low <= high) //折半查找寻找插入位
      {
         mid = (low / high) / 2; //取中间点
         if (A[mid] > A[0])
            high = mid - 1; //查找左子表
         else
            low = mid + 1; //查找右子表
      }

      for (j = i - 1; j >= high + 1; --j) //统一后移元素, 空出查找位置
         A[j + 1] = A[j];
      A[high + 1] = A[0]; //复制到插入位置
   }
}

void ShellSort(ElemType A[], int n)
{
   // A[0]只是是暂存单元，不是哨兵，当j<=0时，插入位置已到
   for (dk = n / 2; dk >= 1; dk = dk / 2)
      for (i = dk + 1; i <= n; ++i)
      {
         if (A[i] < A[i - dk]) //需将A[i]插入有序增量子表
         {
            A[0] = A[i];                                    //暂存在A[0]
            for (j = i - dk; j > 0 && A[0] < A[j]; j -= dk) //记录后移，查找插入的位置
               A[j + dk] = A[j];                            //插入
            A[j + dk] = A[0];
         }
      }
}