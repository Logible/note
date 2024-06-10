# EaGAN

## 问题描述

- 问题
  - 名词
    - F_w: 生成图像的特征向量
    - F_d: 生成图像的深度图向量
    - F_e: 生成图像的几何图形向量
  - 作者使用
    - F_w经过卷积成为键F_k和值F_v、
    - 深度向量F_d经过卷积成为查询F_q
    - 使得上述向量做Attention, 生成新的生成图像的特征向量Fg(并且效果较好)
  - 我如何将F_e(几何图形向量)融入这个Attention模块？

## 下一步

1. 不加Attention训练看看是否为Emoca问题
2. 多层Attention尝试(保底有效果)
3. 更换Attention方法
   1. 多模态融合策列
   2. 用原特征后加权(试试这个，可间接看(1))

- Ori_14_150
  - Average PSNR: 23.003055263430497
  - Average SSIM: 0.7321230246295752
  - Average L1 Distance: 0.047230543398419575
- Ori_14_200
  - Average PSNR: 23.158844947374323
  - Average SSIM: 0.7386154111256801
  - Average L1 Distance: 0.04634193654267893
- Online_Ori: 
  - Average difference: 1.2763131292956778
  - Average difference: 0.1292876144975204
  - Average PSNR: 23.812695854308952
  - Average SSIM: 0.7627718130000286
  - Average L1 Distance: 0.0430993507184896
- EaGAN_14_150(pose高0.04,L1低0.003,id低0.001)
  - Average difference: 1.4872668380793843
  - Average difference: 0.15312322913098517
  - Average PSNR: 23.165852162760444
  - Average SSIM: 0.7396817772311491
  - Average L1 Distance: 0.04543782485447766