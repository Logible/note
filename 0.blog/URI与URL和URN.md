# URI、URL与URN的定义的关系

## 1.前言

因欲了解URI、URL与URN的定义的关系,发现博客上相关的文章很少且不全/错误。故使用了公司的网络查询维基百科后总结如下

## 2.URI、URL与URN的定义

### 2.1 URI（Uniform Resource Identifier）

统一资源标志符在电脑术语中是用于**标志某一互联网资源名称的字符串。**

该种标志允许用户对网络中（一般指万维网）的资源通过特定的协议进行交互操作。

### 2.2 URL（Uniform Resource Locator）

统一资源定位符，或称统一资源定位器、定位地址、URL地址俗称网页地址，简称**网址**，是因特网上标准的资源的地址（Address），如同在网路上的门牌。

补充：此为维基百科上URL的定义，但笔者经查阅URI和URL的关系，认为上述定义是较为**狭义的定义**。如在Unix操作系统中，一个典型的URL地址可能是一个文件目录，例如file:///home/username/RomeoAndJuliet.pdf。该URL标志出存储于本地硬盘中的电子书文件，故这里引用在URI介绍中URL的定义：

URL是一种URI，它标志一个互联网资源，并指定对其进行操作或取得该资源的方法。可能通过对主要访问手段的描述，也可能通过网络“位置”进行标志。

### 2.3 URN(Uniform Resource Name)

统一资源名称,是统一资源标识（URI）的历史名字.如今URN和URL都已经是URI的一种

## 3.URI 与 URL 和URN 的关系

![20210831135417](https://raw.githubusercontent.com/Logible/Image/main/note_image/20210831135417.png)

上文已提到，URN和URL是URI的一种。统一资源名（URN）如同一个人的名称，而统一资源定位符（URL）代表一个人的住址。换言之，URN定义某事物的身份，而URL提供查找该事物的方法。

例子：

URN:

- 用于标志唯一书目的ISBN系统是一个典型的URN使用范例。例如，ISBN 0-486-27557-4无二义性地标志出莎士比亚的戏剧《罗密欧与朱丽叶》的某一特定版本。
  
URL:

- 在URN的例子中，为获得该资源并阅读该书，人们需要它的位置，也就是一个URL地址。在类Unix操作系统中，一个典型的URL地址可能是一个文件目录，例如file:///home/username/RomeoAndJuliet.pdf
- <http://www.wikipedia.org/>这个URL，标志一个特定资源（首页）并表示该资源的某种形式（例如以编码字符表示的，首页的HTML代码）是可以通过HTTP协议从www.wikipedia.org这个网络主机获得的。

## 3.参考链接

- <https://zh.wikipedia.org/wiki/%E7%BB%9F%E4%B8%80%E8%B5%84%E6%BA%90%E6%A0%87%E5%BF%97%E7%AC%A6#RFC_3305>
- <https://zh.wikipedia.org/wiki/%E7%BB%9F%E4%B8%80%E8%B5%84%E6%BA%90%E5%AE%9A%E4%BD%8D%E7%AC%A6>
- <https://zh.wikipedia.org/wiki/%E7%BB%9F%E4%B8%80%E8%B5%84%E6%BA%90%E5%90%8D%E7%A7%B0>
