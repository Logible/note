#define MaxVertexNum 100 //顶点数目的最大值

typedef char VertexType; //顶点的数据类型
//带权图中边上权值的数据类型
typedef int EdgeType;
typedef struct
{
   VertexType Vex[MaxVertexNum];              //顶点表
   EdgeType Edge[MaxVertexNum][MaxVertexNum]; //邻接矩阵，边表
   int vexnum, arcnum;                        //图的当前顶点数和弧数
} MGraph;