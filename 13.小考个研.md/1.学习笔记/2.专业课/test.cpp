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
} SStable, SeqList;

int Search_Seq(SStable ST, ElemType key)
{
   ST.elem[0] = key; //光明哨兵
   for (int i = ST.TableLen; ST.elem[i] != key; --i)
      ;      //从后往前找
   return i; //若表中不存在关键字为key的元素,将查找到i为0时退出for循环
}

int Binary_Search(SeqList L, ElemType key)
{
   int low = 0, high = L.TableLen - 1;
   mid;
   while (low <= high)
   {
      /* code */
      mid = (low + high) / 2; //取中间位置
      if (L.elem[mid] == key)
         return mid;
      else if (L.elem[i] > key)
         high = mid - 1; //从前半部分查找
      else
         low = mid + 1; //从后半部分查找
   }
   return -1; //查找失败
}