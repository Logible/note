# FOMM

- model occlusion
  - The term "model occlusions" refers to the process of **predicting which areas of an image will be obscured or blocked** from view due to the movement of objects within a scene. 
  - By modeling these occlusions, the system can make informed decisions about how to **fill in or 'inpaint' the hidden areas** to maintain a seamless visual experience in the animated image or video.

## 3

- sets of sparse trajectories
  - it means you have multiple trajectories that are each **defined by a series of keypoints tracked over time**
- Keypoint Representation as a Bottleneck
  - This refers to the role of keypoints in **reducing the dimensionality of the data**
  -  an encoder-decoder network, the encoder **compresses the input data (in this case, motion information) into a lower-dimensional space**, The bottleneck is the part of the network where this compression happens
- can be moved using the keypoints trajectories
  - This is done by tracking how **keypoints move over time in the driving video** and then applying those same movements to the corresponding keypoints in the source image to create an animated sequence. 

## 3.1

- The backward optical flow
  - Imagine you have a video where a toy car is rolling from left to right across a table.
  - It would analyze the motion by looking at the car's position in a later frame (the driving frame D) and then calculating the motion required to **move it back to its position** in an earlier frame (the source frame S).
