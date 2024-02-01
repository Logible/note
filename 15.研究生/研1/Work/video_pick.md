# video_pick

## 生成要求

- 输入：50分钟左右的主播带货视频，分辨率为866*486
- 输出：若干个（尽量多）满足要求的视频片段

- 视频片段要求
  - 大小：256*256像素
  - 时间：每段3~10s左右
  - 人像不能有遮挡，例如：被麦克风遮挡，被手部遮挡
  - 背景音只能轻微噪声

1. 深度学习模型进行人脸检测，裁剪人脸区域

## 去噪

## 人脸识别剪切

python crop-video.py --inp G:\dataset\video_pick\huazhiji_0.mp4

python crop-video.py --inp r"/data/log/DaGAN/DaGANTest/testVideo.mp4"

pip install face-alignment==1.3.3

## 检测遮挡/噪声

youtube-dl  https://www.youtube.com/watch?v=kTHsY7fbcgQ

wget  https://github.com/yt-dlp/yt-dlp/releases/latest/download/yt-dlp -O youtube-dl

./youtube-dl --proxy "http://192.168.110.84:6128" -f "best/mp4" --write-auto-sub --write-sub --sub-lang en --skip-unavailable-fragments https://www.youtube.com/watch?v=kPo1JPCa2ws --output youtube-taichi/kPo1JPCa2ws.mp4

./youtube-dl --proxy "http://192.168.110.84:6128" -f "best/mp4" --write-auto-sub --write-sub --sub-lang en --skip-unavailable-fragments https://www.youtube.com/watch?v=kPo1JPCa2ws --output youtube-taichi/kPo1JPCa2ws.mp4
