bool isEmpty(SqQueue Q)
{
    if (Q.rear = Q.front)
        return true;
}

//入队
bool EnQueue(SqQueue &Q, ElemType x)
{
    if ((Q.rear + 1) % MaxSize == (Q.front + 1) % MaxSize)
        return false; //队满, 报错
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

//出队
bool DeQueue(SqQueue &Q, ElemType x)
{
    if (Q.rear == Q.front)
        return false; //队空, 报错
    Q.data[Q.front] = x;
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}