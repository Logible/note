typedef int ElemType;
typedef struct BiTNode
{
   int weight;
   int data;
   struct BiTnode *lchild, *rchild;
} BiTNode, *BTree;

//删除值为x的结点(Log法)
deleteXchild(BTree T, ElemType x)
{
   if (T->data == x)
   {
      if (T->lchild)
      {
         free(T->lchild);
         T->lchild = NULL;
      }
      if (T->rchild)
      {
         free(T->rchild);
         T->rchild = NULL;
      }
   }else{
      deleteXchild(T->lchild,x);
      deleteXchild(T->rchild,x);
   }
}
