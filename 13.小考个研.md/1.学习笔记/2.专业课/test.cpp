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