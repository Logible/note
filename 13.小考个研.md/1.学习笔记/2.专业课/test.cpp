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

void leftMove(Sqlist &L, int p)
{
   int S[p];
   for (i = 0; i < p; i++)
   {
      S[i] = L.R[i];
      L.R[i] = L.R[i + p];
   }
   for (i = p; i < L.length; i++)
   {
      L.R[i] = S[j++];
   }
   return true;
}

void Reverse(int R[], int left, int right)
{
   int mid = (left + right / 2);
   for (int i = 0; i <= mid - left; i++)
   {
      int temp = R[left + i];
      R[left + i] = R[right - i];
      R[right - i] = temp;
   }
}

void Converse(int R[], int n; int p)
{
   Reverse(R, 0, p - 1);
   Reverse(R, p, p - 1);
   Reverse(R, 0, p - 1);
}

int midNumber(int A[], int B[], int L)
{
   for (i = 0; j = 0, l = 0;;)
   {
      if (A[i] > B[j])
      {
         i++;
         tag = 0;
      }
      else
      {
         j++;
         tag = 1;
      }
      l++;
      if (l == L)
      {
         if (tag == 0)
            return A[i];
         if (tag == 1)
            return B[j];
      }
   }
}

int mainElement(int A[], int n)
{
   int S[n] = {0};
   for (i = 0; i < n; i++)
      S[A[i]]++;
   int max = S[0];
   int main = 0;
   for (i = 0; i < n; i++)
      if (max < S[i])
      {
         max = S[i] main = i;
      }
   if (max > n / 2)
      return main;
   else
      return -1;
}

int findMissMin(int A[], int n)
{
   int i, *B; //标记数组
   B = (int *)malloc(sizeof(int) * n);
   menset(B, 0, sizeof(int) * n); //赋初值0
   for (i = 0; i < n; i++)
      if (A[i] > 0 && A[i] <= n)
         B[A[i] - 1] = 1;
   for (i = 0; i < n; i++)
      if (B[i] == 0)
         break;
   return i + 1;
}

#define INT_MAX 0x7fffffff

int abs_(int a)
{
   if (a < 0)
      return -a;
   else
      return a;
}

bool xls_min(int a, int b, int c)
{
   if (a <= b && a <= c)
      return true;
   else
      return false;
}

int findMinofTrip(int A[], int n, int B[], int m, int C[], int p)
{
   int i = 0, j = 0, k = 0, D_min = INT_MAX, D;
   while (i < n && j < m && k < p && D_min > 0)
   {
      D = abs_(A[i] - B[i]) + abs_(B[j] - C[k]) + abs_(C[k] - A[i]); //计算D
      if (D < D_min)
         D_min = D;

      if (xls_min(A[i], B[j], C[k]))
         i++;
      else if (xls_min(B[j], A[i], C[k]))
         j++;
      else
         k++;
   }
   return D_min;
}

typedef int ElemType;

typedef struct LNode
{
   Elemtype data;
   struct LNode *link;

} LNode, *Linklist;

int Search_k(Linklist list, int k)
{
   LNode *p = list->link, *q = list->link; //指针pq指示第一个结点
   int count = 0;
   while (p != NULL)
   {
      if (count < k)
         count++ else q = q->link;
      p = p->link;
   }
   if (count < k)
      return 0;
   else
   {
      cout << q->data;
      return 1;
   }
}

LNode *find_first_commom(Linklist str1, Linklist str2)
{
   int len1 = Length(str1);
   int len2 = Length(str2);
   LinkNode *p = str1.next, *q = str2.next;
   for (p = str; len1 > len2; len1--) // 使q指向的链表与p指向的链表等长
      p = p.next;
   for (p = str; len2 > len1; len2--)
      q = q.next;
   while (p->next != null && p->next != q->next)
   {
      p = p.next;
      q = q.next;
   }
   return p->next; //返回共同后缀起始点
}