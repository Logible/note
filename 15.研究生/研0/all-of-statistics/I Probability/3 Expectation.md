# Expection

- [Expection](#expection)
  - [word](#word)
  - [3.1 Expectation of a Random Variable](#31-expectation-of-a-random-variable)
  - [3.2 Properties of Expectations](#32-properties-of-expectations)
  - [3.3 Variance and Covariance](#33-variance-and-covariance)
  - [3.4 Expectation and Variance of Important Random Variables](#34-expectation-and-variance-of-important-random-variables)
  - [3.5 Conditional Expectation](#35-conditional-expectation)
  - [3.6 Moment Generating Functions](#36-moment-generating-functions)
  - [question](#question)

## word

- Indicator function of A
  - ![20230717202705](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230717202705.png)

- prompt
  - why(use Latex to display the content which inside the $$)

## 3.1 Expectation of a Random Variable

- Definition![20230717172835](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230717172835.png)
  - $E(X)$ exists if $\displaystyle \int_x|x|dF(X)<\infty$. Otherwise we say that the expectation does not exist.
- 3.6 Theorem
  - ![20230718152252](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718152252.png)
- 3.10 $k^th$ moment
  - ![20230718161959](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718161959.png)

## 3.2 Properties of Expectations

- 3.11 Theorem![20230718165212](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718165212.png)
- 3.13 Theorem![20230718165413](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718165413.png)

## 3.3 Variance and Covariance

- The variance measures the “spread” of a distribution
  - A distribution with **a large spread** indicates that the values are **more spread out**
  - while a distribution with **a small spread** indicates that the values are **closer to the central value**.

- 3.14 Variance![20230718165852](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718165852.png)
- 3.15 Theorem![20230719005617](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230719005617.png)
- sample mean && sample variance
  - ![20230718172752](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718172752.png)
    - The reason for using n-1 instead of n is to provide an unbiased estimate of the **population variance**.
- 3.17 Theorem![20230718173148](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718173148.png)
- covariance & correlation
  - ![20230719010104](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230719010104.png)
- 3.19 Theorem
  - ![20230718173851](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718173851.png)
- 3.20 Theorem
  - ![20230718174502](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718174502.png)
- 3.21 Lemma![20230722225325](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230722225325.png)

## 3.4 Expectation and Variance of Important Random Variables

- ![20230720171743](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230720171743.png)

## 3.5 Conditional Expectation

- Definition![20230720171754](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230720171754.png)
- 3.24 Theorem![20230720171927](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230720171927.png)
- conditional variance![20230720202659](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230720202659.png)
- 3.27 heorem![20230720202714](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230720202714.png)

## 3.6 Moment Generating Functions

- Definition![20230720224241](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230720224241.png)

- 3.31 Lemma
  - ![20230722182107](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230722182107.png)
- 3.33 Theorem
  - ![20230722182817](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230722182817.png)

## question

- $E(X) = \int xdF(x) =$($$内以markdown文本呈现)

  - $\sum xf(x) if X is discrete$
  - $\int xf(x)dx if X is continuous$

  I can understand that getting the sum of xf(x) is the average value of X, but What is $\int xf(x)dx$ means?

  - $E(X) = ∫xf(x)dx$
    - The integral sums up the values of x multiplied by their corresponding probabilities (density) over the entire range of possible values for X.

- why $[\frac{d}{dt}E(e^{tx})]=E[\frac{d}{dt}e^{tx}]$(use Latex to display)
  - use the fact that the expectation operator **can be moved inside the derivative**.
- special cases![20230718154255](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230718154255.png)
  - 最后一步是概率密度函数的定义

- why$V(aX) = a^2V(X)$(a is a constant),(use Latex to display the content which inside the $$)
  - ![20230722215820](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230722215820.png)

- why$V(X) = E(X^2)-E(x)^2$(use Latex to display the content which inside the $$)
  - ![20230722220117](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230722220117.png)

- 分布积分法Parts
  - ![20230717200632](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230717200632.png)
  - ![20230722223211](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230722223211.png)
    - The integration of $\displaystyle \frac{1}{1+x^2}$ is $tan^{-1}x$
