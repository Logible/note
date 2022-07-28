typedef int LinkQueue;
typedef int LinkNode;

//初始化
void InitQueue(LinkQueue &Q)
{
    Q.front = Q.rear = (LinkNode *)malloc(sizeof(LinkNode));
    Q.front->next = NULL; //初始为空
}

bool isEmpty(LinkQueue Q)
{
    if (Q.rear = Q.front)
        return true;
    else
        return false;
}

//入队
bool EnQueue(LinkQueue &Q, ElemType x)
{
    LinkNode *s = (LinkNode *)malloc(sizeof(LinkNode));
    //创建新节点插入到链尾
    s->data = x;
    s->next = NULL;
    Q.rear = s;
}

//出队
bool DeQueue(LinkQueue &Q, ElemType x)
{
    if (Q.front == Q.rear) //空队
        return false;
    LinkNode *p = Q.front->next;
    x = p->data;
    Q.front->next = p->next;
    if (Q.rear = p) //原队列只有一个结点, 删除后变空
        Q.rear = Q.front;
    free(p);
    return true;
}