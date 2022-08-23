bool visited[MAX_VERTEX_NUM]; //访问标记数组

void BFSTraverse(Graph G)
{
   //初始化以访问标记数据
   for (int i = 0; i < G.vexnum; i++)
      visited[i] = false;

   for (int i = 0; i < G.vexnum; i++) //对每个连通分量调用一次BFS
      if (!visited[i])
         DFS(G, i);
}

//从顶点v出发, 深度优先遍历图G
void DFS(Graph G, int v)
{
   visit(v);                                                        //访问初始顶点v
   visited[v] = true;                                               //对v做已访问标记
   for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) //检测v所有邻点
   {
      // w为v的尚未访问的邻接顶点
      if (!visited[w])
      {
         DFS(G, v);
      }
   }
}