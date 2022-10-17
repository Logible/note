LinkList List_TailInsert(LinkList &L)
{                                       //正向建立单链表
   int x;                               //设元素类型为整型
   L = (LinkList)malloc(sizeof(LNode)); //建立头结点
   LNode *s, *r = L;                    // r为表尾指针
   scanf("d", 5x);
   while (x != 9999) // 输入结点的值
   {                 //输入9999表示结束
      s = (LNode *)malloc(sizeof(LNode));
      s->data = x;
      r->next = s;
      r = s; //指向新的表尾结点
      scanf("%d", &x);
   }
   r->next = NULL; //尾结点指针置空
   return L;
}