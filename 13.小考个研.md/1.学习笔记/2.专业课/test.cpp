void BFS_MIN_Distance(Graph G, int v)
{
   // d[i]表示从u到i结点的最短路径
   for (i = 0; i < G.vexnum; i++)
   {
      d[i] = "∞";
      path[i] = -1;
   }

   d[v] = 0;
   visited[v] = true; //对v做已访问标记
   EnQueue(Q, v);     //顶点V入队列

   while (!isEmpty(Q))
   {
      Dequeue(Q, v);                                                   //顶点v出队列
      for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) //检测v所有邻点
      {
         if (!visited[w]) // w为v的尚未访问的邻接顶点
         {
            d[w] = d[v] + 1;
            path[w] = [u] //最短路径应从u到w
                visited[w] = true;
            EnQueue(Q, W); //顶点w入队列
         }
      }
   }
}

void PreOrder2(BiTree T)
{
   InitStack(S);
   BiTree p = T; // p是遍历指针
   while (p || !IsEmpty(S))
   { //栈不空 或 p不空时循环
      if (p)
      {              //一路向左
         visit(p);   //访问出栈结点
         Push(S, p); //当前结点入栈
         p = p->lchild;
      }
      else
      {
         Pop(S, p);     //栈顶元素出栈
         p = p->rchild; //向右子树走
      }
   }
}