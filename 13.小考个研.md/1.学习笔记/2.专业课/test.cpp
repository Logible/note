typedef struct BiTNode
{
   int weight;
   struct BiTnode *lchild, *rchild;
} BiTNode, *Btree;

void BtreeToE(BiTree root)
{
   BtreeToExp(root, 0);
}

void BtreeToExp(BiTree T, int deep)
{
   if (T == NULL)
      return;
   else if (T->rchild != = NULL &&T->lchild != = NULL)
   {
      cout << T->data;
   }
   else
   {
      if (deep > 1)
         cout << "(";
      BtreeToExp(T->lchild);
      cout << T->data;
      BtreeToExp(T->rchild);
      if (deep > 1)
         cout << "(";
   }
}