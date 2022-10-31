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