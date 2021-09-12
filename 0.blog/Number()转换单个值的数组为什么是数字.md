# Number()函数转换'单个数值的数组'为何是数字?【JavaScript】

## 1.Number()

熟悉Number()函数的同学可跳过项

使用Number函数，可以将任意类型的值转化成数值。

1. 原始类型值

    - 数值
      - 转换后还是原来的值
    - 字符串
      - 如果可以被解析为数值,则转换为相应的数值
      - 如果不可以被解析为数值,返回NaN
      - 空字符串转为0
    - 布尔值
      - true转为1
      - false转为0
    - undefined
      - 转为NaN
    - null
      - 转为0

    ```js
    // 数值：转换后还是原来的值
    Number(324) // 324

    // 字符串：如果可以被解析为数值，则转换为相应的数值
    Number('324') // 324

    // 字符串：如果不可以被解析为数值，返回 NaN
    Number('324abc') // NaN

    // 空字符串转为0
    Number('') // 0

    // 布尔值：true 转成 1，false 转成 0
    Number(true) // 1
    Number(false) // 0

    // undefined：转成 NaN
    Number(undefined) // NaN

    // null：转成0
    Number(null) // 0
    ```

    - $\color{#ea4335}{Number}$函数将字符串转为数值,要比$\color{#ea4335}{paeseInt}$严格,只有有一个字符无法转成数值,整个字符串就会被转为NaN
    - $\color{#ea4335}{parseInt}$和$\color{#ea4335}{Number}$函数都会自动过来一个字符串的前导和后缀空格

    ```js
    console.log(parseInt('\t\v\r 12.34   \n')) //12
    console.log(Number('\t\v\r12.34\n'))       //12.34
    ```

2. 对象

$\color{#ea4335}{Number}$转换规则

- 第一步:调用对象自身的$\color{#ea4335}{valueOf}$方法,若返回原始类型的值,则直接对该值使用$\color{#ea4335}{Number}$函数,不再进行后续步骤
- 第二步,如果$\color{#ea4335}{valueOf}$方法返回的还是对象,则调用对象是自身的$\color{#ea4335}{toString}$方法
  - 若$\color{#ea4335}{toString}$方法返回原始类型值,则对该值使用$\color{#ea4335}{Number}$函数
  - 若$\color{#ea4335}{toString}$方法返回的是对象,则报错

转换代码:

```js
var obj = {x: 1};
Number(obj) // NaN

// 等同于
if (typeof obj.valueOf() === 'object') {
  Number(obj.toString());
} else {
  Number(obj.valueOf());
}
```

注释:

$\color{#ea4335}{valueOf()}$方法:用于返回对象的原始值
$\color{#ea4335}{toString()}$方法:用于返回代表对象的字符串

## 2.单个数值的数组的转换

以数组a为例

```js
var a = [2]
```

1. 第一步,调用数组的valueOf()方法,返回数组的原始值$\color{#34a853}{[2]}$

    ```js
    console.log(a.valueOf()) //[2]
    ```

2. 第二步,由于$\color{#34a853}{[2]}$仍是对象,调用数组的toString()方法,查看数组的toString()源码可知,返回的是代表我们转换的数组的字符串,也是就$\color{#34a853}{'2'}$

    ```js
        //toString()源码
        toString(): string;
        /**
        * Returns a string representation of an array. The elements are converted to string using their toLocaleString methods.
        */
    ```

    ```js
    console.log([2].toString()) //'2'
    ```

3. 第三步,调用Number函数,将其转换为数字

    ```js
    console.log(Number('2')) //2
    ```

    而为何超过单个数值的数组便无法转换?代入上述过程可知

    ```js
    Number[1,2] //等于
    Number('1,2')//NaN
    ```

    故返回NaN

## 3.参考链接

- <https://wangdoc.com/javascript/features/conversion.html#%E6%A6%82%E8%BF%B0> 阮一峰
- <https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects/Object/valueOf> MDN
- <https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Object/toString> MDN
