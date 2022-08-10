typedef struct BiTNode
{
    ElemType data;                    //数据域
    struct BiTNode *lchild, *rchild; //左、右孩子指针
} BiTNode, *BiTree;
