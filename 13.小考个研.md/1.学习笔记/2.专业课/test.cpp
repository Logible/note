void BFS_MIN_Distance(Graph G, int v)
{
   for (i = 0; i < G.vexnum; i++)
   {
      d[i] = "∞";
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
            d[w] = d[u] + 1;
            visited[w] = true;
            EnQueue(Q, W); //顶点w入队列
         }
      }
   }
}