typedef struct LinkNode
{
    /* data */
    ElemType data;         // 数据域
    struct LinkNode *Next; //指针域
} * LiStack;               //栈类型定义
