#define MaxVertexNum 100 //图中顶点数目的最大值

//边表结点
typedef struct ArcNode
{
   int adjvex;           //该弧所指向的顶点的位置
   struct ArcNode *next; //指向下一条弧的指针
   //InfoType info;      //网的边权值
} ArcNode;

//顶点表结点
typedef struct VNode
{
   VertexType data; //顶点信息
   ArcNode *first;  // 指向第一条依附该顶点的弧的指针
} VNode, AdjList[MaxVertexNum];

typedef struct
{
   AdjList vertices;   //邻接表
   int vexnum, arcnum; //图的顶点数和弧数
} ALGraph;             // ALGraph 是以邻接表存储的图类型