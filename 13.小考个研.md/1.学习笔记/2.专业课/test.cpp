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

void BubbleSort(ElemType A[], int n)
{
   for (i = 0; i < n - 1; i++)
   {
      flag = false;               //表示本躺冒泡是否发生交换的标志
      for (j = n - 1; j > i; j--) //一趟冒泡
         if (A[j - 1] > A[j])
         {                        //若为逆序
            swap(A[j - 1], A[j]); //交换
            flag = true;
         }

      if (flag == false) //本趟遍历后没有发生交换,说明表已经有序
         return;
   }
}

//一趟划分
int Partition(ElemType A[], int low, int high)
{
   ElemType pivot = A[low]; //将当前表中第一个元素设为枢纽对表进行划分
   while (low < high)
   {
      while (low < high && A[high] >= pivot) --high;
      A[low] = A[high]; //将比枢纽小的元素移动到左端
      while (low < high && A[high] <= pivot) ++low;
      A[high] = A[low]; //将比枢纽大的元素移动到右端
   }
   A[low] = pivot; //枢纽元素存放在最终位置
   return low;
}

void QuickSort(ElemType A[], int low, int high)
{
   if (low < high)
   {                                           //递归跳出的条件
      int privotpos = Partition(A, low, high); //划分
      QuickSort(A, low, privotpos - 1);
      QuickSort(A, privotpos + 1, high);
   }
}