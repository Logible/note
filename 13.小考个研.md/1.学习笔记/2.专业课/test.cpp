

Elemtype com_ancester(BTree T[], int i, int j)
{
   if (T[i] != '#' && T[j] != '#') //两个结点不为空
   {
      while (i != j)
      {
         if (i > j)
            i = i / 2;
         if (j > i)
            j = j / 2;
      }
      return T[i];
   }
}