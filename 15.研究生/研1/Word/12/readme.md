# readme

环境：conda activate myenv

示例：

```python
python main.py --inp /data/log/DaGAN/DaGANTest/cut.mp4
```

- 可选参数

--image_shape 裁剪大小，默认为256*256

--iou_with_initial 最小满足的IOU，超过此值视为相同人脸，默认为0.5

--min_frames 视频最小帧数，默认为3*30帧

--max_frames 视频最大帧数，默认为10*30帧

--output_path 保存路径，默认为./video/crop