typedef int ElemType;
typedef struct BiTNode
{
   int weight;
   int data;
   int height;
   struct BiTnode *lchild, *rchild;
} BiTNode, *BTree;

typedef struct
{
   ElemType *elem; //元素的存储空间基址, 建表时按实际长度分配
   int TableLen;   //表的长度
} SStable;

int Search_Seq(SStable ST, ElemType key)
{
   ST.elem[0] = key; //光明哨兵
   for (int i = ST.TableLen; ST.elem[i] != key; --i); //从后往前找
   return i;//若表中不存在关键字为key的元素,将查找到i为0时退出for循环
}