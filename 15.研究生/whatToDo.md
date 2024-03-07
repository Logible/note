# doWhat

## 研究生规划

### 就业

- 前端
  - 优点
    - 赛道没有那么后端那么卷
    - 学的内容已经较多
  - 缺点
    - 天花板低
- 测试开发
  - 优点
    - 天花板低
    - 一般不用加班
  - 缺点
    - 还没开学，只有大厂需要
- 后端
  - 优点
    - 学的东西少
    - 天花板高
    - 不用和测试沟通
  - 缺点
    - 赛道卷，很多985211争

## 科研方向

## 未来

- 考公考编
  - 考回潮州
    - 一世人潮州
      - 算了吧。。
  - 考在二线城市
    - 一世人那个城市6分
  - 优点
    - 稳定(一眼看到头)
  - 缺点
    - 钱少
- 国内code 7分
  - 优点
    - 钱多
  - 缺点
    - 工作强度大，伤身体
    - 不好找工作
- 外企 8分
  - 优点
    - 遵守劳动化，工作强度适当
  - 缺点
    - 难找到
- 出国 8.5分 在有工作技能＋经验的基础上，有流利口语
  - 优点
    - 工作强度小
    - 钱多
    - 体验外面的世界
  - 缺点
    - 娱乐设施少
    - 吃的少（自己做
    - 孤独

## PPT

- 视频预处理

处理公司的预训练数据

原数据为200G主播带货视频，要求将其处理为满足要求的片段

1. 画面主体为人像
2. 视频为256*256像素
3. 片段为3~10s
4. 背景音只能轻微噪声
  - 降噪处理
  - 说话人二者分离
5. 人像无遮挡


- FOMM DAGAN
  - 论文阅读
    - FOMM内容
      - overview: the model of this paper is trained to reconstruct the training videos by **combining a single frame and a learned latent representation of the motion** in the video.
      - latent representation of the motion: a combination of **keypoint displacements** and **local affine transformations**
    - DaGAN内容
      - overview: Base on the FOMM model, introduce a **self-supervised face-depth** learning method to automatically recover dense **3D facial geometry**
        - leverage them to estimate sparse facial keypoints
        - be utilized to learn 3D-aware cross-modal (i.e. appearance and depth) attention to guide the generation of motion fields for warping source image representations.
  - github源码checkpoint运行
  - 视频评估手段代码运行
  - vox开源Youtube数据集下载
  - github源码training运行

- 理解数字人评估指标物理含义
  - what comprise a good talking head generation
  - 5篇近期CVPR

/data/anaconda3/envs/modelscope/bin/python
