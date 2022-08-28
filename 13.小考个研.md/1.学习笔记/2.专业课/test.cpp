typedef int ElemType;
typedef struct BiTNode
{
   int weight;
   int data;
   int height;
   struct BiTnode *lchild, *rchild;
} BiTNode, *BTree;

int maxWinth(BTree T)
{
   p = preorder(T, 0);
   width = max_element(p);
}

int *preOrder(BTree T, int deep)
{
   static widNum[T.height];
   if (T == NULL)
      return;
   else
   {
      widNum[deep]++;
      if (T->lchild)
         preOrder(T->lchild, deep + 1);
      if (T->rchild)
         preOrder(T->rchild, deep + 1);
   }
   return widNum;
}