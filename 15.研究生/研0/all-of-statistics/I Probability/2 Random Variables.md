# Random

- [Random](#random)
  - [0 word](#0-word)
  - [2.1 Introduction](#21-introduction)
  - [2.2 Distribution Functions and Probability Functions](#22-distribution-functions-and-probability-functions)
    - [CDF](#cdf)
    - [Probability Functions](#probability-functions)
    - [PDF](#pdf)
  - [QF](#qf)
  - [2.3 Some Important Discrete Random Variables](#23-some-important-discrete-random-variables)
  - [2.4 Some Important Continuous Random Variables](#24-some-important-continuous-random-variables)
  - [2.5 Bivariate Distributions](#25-bivariate-distributions)
  - [2.6 Marginal Distributions](#26-marginal-distributions)
  - [2.7 Independent Random Variables(one definiton)](#27-independent-random-variablesone-definiton)
  - [2.8 Conditional Distributions](#28-conditional-distributions)
  - [2.9 Multivariate Distributions and iid Samples](#29-multivariate-distributions-and-iid-samples)
  - [2.10 Two Important Multivariate Distributions](#210-two-important-multivariate-distributions)
  - [2.11 Transformations of Random Variables](#211-transformations-of-random-variables)
  - [2.12 Transformations of Several Random Variables](#212-transformations-of-several-random-variables)
  - [question](#question)

## 0 word

- what is the meaning of $lim_{y↑x} F(y)$
  - "y↑x" denotes that y is approaching x, meaning y is getting closer and closer to x.

- ℝ: The real numbers are represented by the symbol R or ℝ.
  - They include numbers that can be expressed as fractions (rationals) as well as numbers that cannot be expressed as fractions (irrationals).

- X ∼ F: X has distribution F

- random vector: Let X = (X1,...,Xn) where X1,...,Xn are random variables. We call X a random vector

- The real line
  - denoted by ℝ, represents the set of all real numbers.

- a subset A of the real line
  - In mathematics, specifically in set theory, a subset A of the real line refers to **a collection of elements or numbers** that are taken from the set of real numbers

- X ∈ A： ![20230714180505](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230714180505.png)

- A matrix Σ is positive definite if, for all nonzero vectors x, x^T Σx > 0. is the vectors 行向量 or 列向量
  - In the context of the expression "x^T Σx," the vector x is typically assumed to be a **column vector**.

- prompt: 以这种形式表示：$\int$ 转为∫

## 2.1 Introduction

- random variable![20230712004931](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712004931.png)

## 2.2 Distribution Functions and Probability Functions

### CDF

- CDF![20230712163640](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712163640.png)
  - FIGURE![20230712164854](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712164854.png)
- 2.7 Theorem![20230712165902](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712165902.png)
- 2.8 Theorem![20230713144213](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713144213.png)
- 2.15 Lemma.
  - ![20230712200438](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712200438.png)

### Probability Functions

- **definition**![20230712172717](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712172717.png)
  - example![20230712195943](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712195943.png)

### PDF

- PDF![20230712180155](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712180155.png)

- 2.13 First, note that if X is continuous then **P(X = x) = 0** for every x. Don’t try to think of f(x) as P(X = x). This only holds for discrete random variables.

## QF

- quantive function![20230712203051](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230712203051.png)

## 2.3 Some Important Discrete Random Variables

## 2.4 Some Important Continuous Random Variables

- useful facts
  - Tradition dictates that **a standard Normal random variable** is denoted by **Z**.
  - ![20230713180514](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713180514.png)

## 2.5 Bivariate Distributions

- Definition![20230713200727](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713200727.png)
- The hatched region is the event X ≥ Y intersected with x2 ≤ y ≤ 1.

## 2.6 Marginal Distributions

- Definition
  - mass function![20230713204842](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713204842.png)
  - densities![20230713205425](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713205425.png)

## 2.7 Independent Random Variables(one definiton)

- Definition![20230713210113](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713210113.png)
  - 2.30 Theorem![20230713210351](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713210351.png)
  - 2.33 Theorem![20230713211322](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713211322.png)

## 2.8 Conditional Distributions

- Definition
  - mass function![20230713221212](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713221212.png)
  - pdf![20230713221827](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713221827.png)

## 2.9 Multivariate Distributions and iid Samples

- Definition![20230714174657](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230714174657.png)

- "If $X_1,...,X_n$ are independent and each has the same marginal distribution with cdf F",why there are indepentdent and have marginal distribution, does marginal distribution don't need joint distribution
  - The marginal distribution of a random variable **just represents** its probability distribution independently of any other variables.

## 2.10 Two Important Multivariate Distributions

- Multino-mial.
- Multivariate Normal.

## 2.11 Transformations of Random Variables

- mass function![20230714205551](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230714205551.png)
- continuous case
  - ![20230714215358](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230714215358.png)

## 2.12 Transformations of Several Random Variables

- Definition![20230714231644](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230714231644.png)

## question

- a joint uniform distribution
  - ![20230713223252](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713223252.png)
  - X and Y is a joint uniform distribution

- the relation between CDF and Nomral distribution?
  - The pdf and cdf of a standard Normal are denoted by φ(z) and Φ(z).

- what is Distribution Functions
  - the functions which probability is discrete.
  - A distribution function, also known **as a cumulative distribution function (CDF)**, is a function that describes the probability distribution of a random variable.

- 过程？![20230713170702](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230713170702.png)
  - 此书错误，是k-1
  - The formula for the sum of an infinite geometric series is given by:
    - $∑_{k=0}^{∞}r^k = 1 / (1 - r)$
    - from $\sum_{j = k}^{∞} r^j = r^k/(1 − r),0<r<1$

🏀

- 2.4 GAMMA后的DISTRIBUTIONS

- 2.43，2.44？![20230714203341](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230714203341.png)
