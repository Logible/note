LinkList List_HeadInsert(LinkList &L) //逆向建立单链表
{
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode)); //创建头结点
    L->next = NULL;                      //初始为空链表
    scanf("%d", &x);                     //输入结点的值
    while (x != 9999)
    {                                       //输入 9999 表示结束
        s = (LNode *)malloc(sizeof(LNode)); //仓U建新结点①
        s->data = x;
        s->next = L->next;
        L->next = s;        //将新结点插入表中，L为头指针
        scanf("%d", &x);
    }
    return L;
}