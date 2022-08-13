void PostThread(ThreadTree &p, ThreadTree &pre)
{
    if (p != NULL)
    {
        //处理根节点
        visit(p, pre);

        //递归 线索化左子树
        PostThread(p->lchild, pre);

        //递归 线索化左子树
        PostThread(p->rchild, pre);
    }
}

//处理根节点
void visit(ThreadTree &p, ThreadTree &pre)
{

    if (p->lchild == NULL)
    {
        p->lchild = pre;
        p->ltag = 1;
    }

    if (pre != NULL && pre->rchild == NULL)
    {
        pre->rchild = p;
        pre->tag = 1;
    }
    pre = p;
}

void CreatePostThread(ThreadTree T)
{
    ThreadTree pre = NULL;
    if (T != NULL) //非空二叉树, 线索化
    {
        PostThread(T, pre); //线索化二叉树
        pre->rchild = NULL; //处理遍历的最后一个结点
        pre->tag = 1;
    }
}