# Models, Statistical Inference and Learning

- [Models, Statistical Inference and Learning](#models-statistical-inference-and-learning)
  - [words](#words)
  - [6.1 Introduction](#61-introduction)
  - [6.2 Parametric and Nonparametric Models](#62-parametric-and-nonparametric-models)
  - [6.3 Fundamental Concepts in Inference](#63-fundamental-concepts-in-inference)
    - [6.3.1 Point Estimation](#631-point-estimation)
  - [question](#question)

## words

- finite-dimensional
  - A vector space is finite-dimensional if it can be spanned by a finite number of linearly independent vectors,
  - vector space
    - In mathematics and physics, a vector space (also called a linear space) **is a set whose elements, often called vectors**, may be added together and multiplied ("scaled") by numbers called scalars
    - scalar
      - A scalar is an element of a field which is used to define a vector space. In linear algebra, **real numbers or generally elements of a field are called scalars** and relate to vectors in an associated vector space through the operation of scalar multiplication
  
## 6.1 Introduction

- Statistical inference, or “learning” as it is called in computer science, is the process of **using data to infer the distribution that generated the data.**

## 6.2 Parametric and Nonparametric Models

- A parametric model![20230815220226](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230815220226.png)

## 6.3 Fundamental Concepts in Inference

### 6.3.1 Point Estimation

- ![20230824215307](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230824215307.png)
- 6.7 Definition![20230824215530](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230824215530.png)
- asymptotically Normal![20230824225456](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230824225456.png)

## question

- explain the median $T(F) = F^{−1}(\frac{1}{2})$
  - The median of a distribution or a function $F$ is a statistical measure that divides the data or the function into two equal parts. Mathematically, for a continuous distribution or function $F$, the median $T(F)$ is given by $T(F) = F^{-1}\left(\frac{1}{2}\right)$.
  - The inverse of the cumulative distribution function, denoted by $F^{-1}$, allows us to find the value of $x$ for a given probability.
  - When we set the probability equal to $\frac{1}{2}$, we are finding the value of $x$ for which the cumulative probability is exactly half.

  - so the $T(F)$ actually reprensents a value x？
    - Yes, The value $T(F)$ represents the value of $x$ for which the cumulative probability is exactly half, or in other words, it represents the median of the distribution. The notation $T(F)$ is just a different way of expressing the median as a function of the cumulative distribution $F$.

⭐⭐⭐⭐

- why $E(E(Y − r(X))|X) = E(E(Y|X)-r(X))$?, say it simply

- ![20230824220856](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230824220856.png)
  - what does $f(x_1,...,x_n)$ mean?
- why $E_\theta(\overline{\theta_n}-\theta)^2 = (\overline{\theta_n}-\theta)^2$
