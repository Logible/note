# 0.前言

- [0.前言](#0前言)
- [1.需要的工具](#1需要的工具)
- [2.工具准备](#2工具准备)
  - [2.1 Visual Code](#21-visual-code)
  - [2.2 Github仓库](#22-github仓库)
    - [1.自行注册账号](#1自行注册账号)
    - [2.点击右上方新建仓库](#2点击右上方新建仓库)
    - [3.填写仓库信息](#3填写仓库信息)
    - [4.获取仓库token](#4获取仓库token)
  - [2.3 git的安装与使用](#23-git的安装与使用)
- [3.笔记的使用及Visual Code插件的推荐](#3笔记的使用及visual-code插件的推荐)
  - [3.1 新建笔记文件夹](#31-新建笔记文件夹)
  - [3.2 插件的推荐](#32-插件的推荐)
    - [3.2.1.PicGo](#321picgo)
    - [3.2.2 markdownlint](#322-markdownlint)
    - [3.2.3 Markdown All in one](#323-markdown-all-in-one)
- [4.一些小技巧](#4一些小技巧)
  - [4.1 改变图片大小](#41-改变图片大小)
  - [4.2 将图片独占一行/将图片居中](#42-将图片独占一行将图片居中)
  - [4.3 查找笔记的内容](#43-查找笔记的内容)
  - [4.4 预览你当前编写的部分](#44-预览你当前编写的部分)
- [5.后语](#5后语)
- [6.参考文章](#6参考文章)

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;笔者在刚上大学到前几天,一直都是用的有道云笔记。但前几天有道云服务器突然就崩了，一上午才修好，不免让人怀疑其稳定性和可靠性。因此，笔者经网上查阅，认为github+vscode的markdown格式云笔记是适合我的需求的。故分享搭建云笔记的过程，供新手学习参考。

# 1.需要的工具

1. Visual Code
2. Github仓库
3. git

# 2.工具准备

## 2.1 Visual Code

<https://code.visualstudio.com/>

官网自行下载安装即可

## 2.2 Github仓库

<https://github.com/>

### 1.自行注册账号

### 2.点击右上方新建仓库

<div align=center>
<image width=200px src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815213503.png" />
</div>

### 3.填写仓库信息

![20210815214144](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815214144.png)

### 4.获取仓库token

1. 点击右上角settigns

    <div align=center>
    <image width=200px src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815215119.png" />
    </div>

2. 点击Developer settings 就可以看到Personal access tokens在这里我们可以 创建一个token

    <div align=center>
    <image  src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815215311.png" />
    </div>

3. 填写信息。点击 Generate new token 创建一个新 token，选择 repo，同时它会把包含其中的都会勾选上，我们勾选这些就可以了。然后拉到最下方点击绿色按钮，Generate token 即可。之后就会生成一个 token ，记得复制保存到其他地方，**这个 token 只显示一次！！**（下文需要用到）

<div align=center>
<image  src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815215806.png" />
</div>

## 2.3 git的安装与使用

git需要花费一两天时间去学习巩固，因内容较多，网上的教程也已经较为完整，笔者就不做过多赘述了，这里推荐笔者学习的两个课程

- <https://www.bilibili.com/video/BV1FE411P7B3?from=search&seid=7622804212840127054> 狂神说的教程
- <https://www.runoob.com/git/git-tutorial.html> 狂神说的教程清晰易懂，但有些方面如reset等未细说,新手看完视频后菜鸟教程就也不是问题了
  
# 3.笔记的使用及Visual Code插件的推荐

## 3.1 新建笔记文件夹

1. 克隆仓库（此处需学会上文git教程）

2. 添加文件夹到工作区<div align=center>
<image  src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815221905.png" /></div>

3. 新建xxx.md文件作为笔记即可开始书写笔记<div align=center>
<image  src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815222322.png" /></div>

## 3.2 插件的推荐

### 3.2.1.PicGo

Picgo：用于快速上传图片并获取图片URL的工具

1. 插件库中搜索并安装Picgo<div align=center>
<image  src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815223056.png" /></div>

2. 点击Picgo,进入参数设置页面![20210815223534](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815223534.png)

3. 找到github相关的配置，并按下图进行配置![20210815235809](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815235809.png)

4. 截取图片（微信QQ电脑自带的都可以），而后在md文件中按住Ctrl+Alt+U便可将图片粘贴到.md文件中

5. 可能出现的问题

    若你的配置出现错误，图片便会上传不成功，会有如下提示![20210815230314](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815230314.png)

    此时，可以打开日志文件查看哪里出现了错误，日志文件存放在C盘的用户文件夹下，AppData\Roaming\picgo\picgo.log![20210815230858](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815230858.png)

    打开日志文件，查看错误并寻找解决方法![20210815231554](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815231554.png)

### 3.2.2 markdownlint

markdownlint：vscode上一款非常好用的 Markdown 格式检查扩展工具，它规定了许多规则并实时对文档进行检查，防止一些语法错误，同时维持文档风格的统一，使用此工具有助于形成一个良好的写作习惯和规范。

1. 同上文一样搜索并安装即可

2. 进行笔记的记录时便可用其检查格式，当笔记格式出现错误时便可根据信息改正自己的笔记![20210815224641](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815224641.png)

3. 英语不好的同学可访问<https://www.jianshu.com/p/51523a1c6fe1>查看对应的中文解释

### 3.2.3 Markdown All in one

1. 插件市场安装Markdown All in One并启用

    ![在这里插入图片描述](https://img-blog.csdnimg.cn/f13174a9dc534d01b312f4b2a37a5d4c.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAR1BOVV9Mb2c=,size_10,color_FFFFFF,t_70,g_se,x_16)
2. 使用插件
    打开你的Markdown文件, 按下ctrl+shift+p, 输入table进行命令查找, 点击创建目录

    ![在这里插入图片描述](https://img-blog.csdnimg.cn/122c190cb2ef4125a8aa9637cbd11b60.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBAR1BOVV9Mb2c=,size_20,color_FFFFFF,t_70,g_se,x_16)
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;本步骤的前提是你已经写好了每一级的标题,选择创建目录后就会自动生成目录了

    ![20210905171534](https://img-blog.csdnimg.cn/img_convert/ead88f73130c3e2c0ebffdee708ef590.png)
    由于插件文档中声明

   - The TOC is automatically updated on file save by default. To disable, please change the toc.updateOnSave option.

   意思是你只要保存了文件插件就会帮你自动保存目录，故只要创建一次目录，以后写好直接保存目录就会自动更新了

# 4.一些小技巧

## 4.1 改变图片大小

在.md文件中插入图片时，图片的大小的固定的，若想调节图片的大小。可用html语言进行替换，如正常的图片代码是：

```html
![20210815224641](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815224641.png)
```

使用超文本标签语言，可将其改为

```html
<image  width=200px height=200px src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815223056.png" />
```

其中width和height为指定图片的宽高

## 4.2 将图片独占一行/将图片居中

将上述代码改为

```html
<div align=center>
<image  src="https://raw.githubusercontent.com/Logible/note/main/note_image/20210815215806.png" />
</div>
```

使用div便可独占一行，其中align=center表示居中

## 4.3 查找笔记的内容

当我们需要查找笔记中的内容时，可使用Visual Code的查找功能![20210815232749](https://raw.githubusercontent.com/Logible/note/main/note_image/20210815232749.png)

## 4.4 预览你当前编写的部分

当我们要预览我们的markdown笔记时,使用Ctrl+Shift+V,将你要预览部分的小标题滑至页面最上方,即可预览此部分

比如我要预览Unit17 我就将Unit17滑到页面最上方,再按下快捷键,即可预览

![20210903100528](https://raw.githubusercontent.com/Logible/Image/main/note_image/20210903100528.png)

# 5.后语

若笔者本文某处出现错误还烦请读者指出，如果此篇文章对您有帮助，就请给笔者点个赞趴。

# 6.参考文章

<https://www.jianshu.com/p/51523a1c6fe1>

markdownlint规则详细介绍及自定义参数设置

<https://blog.csdn.net/qq_44926567/article/details/109167394>

markdownlint取消部分html标签警告

<https://www.jianshu.com/p/cb8d2194d5ef>

vscode作为Markdown编辑器

<https://blog.csdn.net/qq_44486550/article/details/107575128>

MarkDown设置图片居中显示并调整大小

<https://www.jianshu.com/p/a6463f8e8cf8>

vscode 写markdown文件时图片粘贴问题
