# 0709-0713

## 0709

1. **advanced** undergraduate students
2. discipline
   1. in computer science, mathematics, statistics, and related **disciplines**.
3. The book includes modern topics like **nonparametric curve estimation**, **bootstrapping**, and **classification**,
4. The reader is **presumed to** know calculus and a little linear algebra.
5. Statistics, data mining, and machine learning are all **concerned with** collecting and analyzing data.
6. computer scientists now recognize the **generality** of statistical theory and methodology
7. Clever data mining algorithms are more **scalable** than statisticians ever thought possible
8. Formal statistical theory is more **pervasive_1** than computer scientists had realized.
9. should be well grounded in basic **probability** and **mathematical statistics**.
10. Using fancy tools like **neural nets, boosting, and support vector**
    1. an atomi_1 submarine
11. uninspiring topics(counting methods, two dimensional **integrals**, etc
12. So I set out to redesign our undergraduate **honors course** on probability and mathematical statistics
13. For example, nonparametric **regression**, bootstrapping, **density** estimation, and graphical models.
14. **An exception** is the topic of **stochastic** processes which is included in the later material
15. **Rigor** and clarity are not synonymous.
16. To avoid getting **bogged down** in uninteresting technical details
17. The **bibliographic_1** references at the end of each chapter point the student to appropriate sources.

- nonparametric curve estimation![nonparametric curve estimation](https://www.researchgate.net/publication/286010770/figure/fig3/AS:667601298530320@1536179961820/The-estimated-parametric-curve-the-nonparametric-curve-and-the-UCB-limits-at-the-1-095.ppm)
- boostrapping![boostrapping](https://miro.medium.com/v2/resize:fit:1400/1*cmA1PPO4Us6_okb5UMhb0Q.jpeg)
- classification![classification](https://upload.wikimedia.org/wikipedia/commons/7/71/Taxonomic_Rank_Graph.svg)

## 0710

1. specific problems such as regression, graphical models, **causation_1**, density estimation, smoothing, classification, and **simulation_1**
2. serves both to **acknowledge** my **debt** to other authors
3. please take it as a **compliment**.
4. I am **indebted** to many people
5. Sb. **valiantly** read through the entire book in **excruciating** detail
6. predicting a **discrete** Y from X
7. let $A_c = {ω ∈ Ω : ω /∈ A}$ **denote** the **complement** of A.
8. The set **difference** is defined by A−B = {ω : ω ∈ A, ω /∈ B}
9. A sequence of sets A1, A2,... is **monotone** increasing
10. P must satisfy three **axioms**:
11. There are many **interpretations** of P(A).
12. P(A) is the **long run proportion** of times that A is true in **repetitions_1**
13. unpredictable sequence of tosses whose **limiting proportion** tends to a constant is an idealization,
14. making repeated **use of the fact** that P is additive for disjoint events,
15. the number of ways of **ordering these objects** is n! = n(n − 1)(n − 2)··· 3 · 2 · 1.
16. Sometimes, we **explicitly** assume that two events are independent.
17. **In other instances**, we **derive** independence by verifying that P(AB) = P(A)P(B) holds
18. each with **positive probability**.

- simulation![simulate](https://www.unrevealedfiles.com/wp-content/uploads/artistic-illustration-of-simulation-theory.jpg)

## 0711

1. Let E denote the event of **interest**
2. Think of P(A|B) as the **fraction** of times A occurs among those in which B occurs.
3. The rules of probability apply to events on the left of the **bar**.
4. For example, the probability of spots **given** you have measles is 1 but the probability that you have measles **given that** you have spots is not 1.
5. This mistake is made often enough in legal cases that it is sometimes called the **prosecutor’s fallacy**.
6. Draw two **cards** from a **deck_1**, without **replacement**. Let A be the event that the first draw is the **Ace of Clubs** and let B be the event that the second draw is the Queen of Diamonds.
7. Bayes’ theorem is the basis of “**expert systems**” and “Bayes’ nets,First, we need a **preliminary** result
8. Let A1,...,Ak be a partition of Ω **such that** P(Ai) > 0 for each i.
9. We call P(Ai) the prior probability of A and P(Ai|B) the **posterior probability** of A
10. I divide my email into three categories: A1 = “**spam**” A2 = “low priority” and A3 = "high priority"
11. the sample space is really there, **lurking** in the background
12. Let Ω = (x, y); x2 + y2 ≤ 1 be the **unit disk**.

- deck![deck](https://www.milefoot.com/math/discrete/counting/images/cards.png)
- disk![disk](https://cdn.ttgtmedia.com/rms/onlineImages/storage-compact_disk_mobile.jpg)
- Ace of Clubs![Ace of Clubs](https://upload.wikimedia.org/wikipedia/commons/thumb/6/61/Ace_of_clubs.svg/1200px-Ace_of_clubs.svg.png)
- Queen of Diamonds![Queen of Diamonds](https://upload.wikimedia.org/wikipedia/commons/7/70/Poker-sm-233-Qd.png)
- lurk![lurk](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRx0f8yzcX71tjqEESKu3INF792ygBFNlQJcQ9li_bBaiaelGmI7VhzmY73X88ueEggpsI&usqp=CAU)

## 0712

1. F is normalized
2. A set is countable if it is finite or it can be put in a one-to-one correspondence with the **integers**. The **even** numbers, the **odd** numbers, and the **rationals** are countable;
3. and fX(x) = F'X(x) at all points x at which FX is **differentiable**.
4. In fact, a pdf can be **unbounded**.
5. The inverse CDF or **quantile function** is defined by
6. it means that all probability **statements** about X and Y will be the same
7. The notation X ∼ F is so **pervasive** that we are stuck with it. Read X ∼ F as “X has distribution F” not as “X is approximately F”.

## 0713

1. Let k > 1 be a given integer.
2. Let X represent a **binary** coin flip
3. The **Binomial** Distribution.
4. X has a **geometric** distribution with parameter p ∈ (0, 1)
5. The probability distribution of the number X of Bernoulli trials needed to get one success, supported on the set $\{1,2,3,\ldots\}$;
6. The parameter µ(\mu) is the “center” (or **mean**) of the distribution and σ(\sigma) is the “spread” (or standard **deviation**) of the distribution.
7. Tradition dictates that a standard Normal random variable is **denoted** by Z
8. We are **treading in deep water** here

## 0714

1. this interval **takes on** values uniformly distributed between 0 and 1.
2. All statistical computing packages will compute $Φ(z) and Φ^{−1}(z)$.
3. The trick here is to be careful about the **range of integration**
4. Much of statistical theory and practice begins with IID **observations**
5. Consider drawing a ball from an **urn**
6. and I is the k × k **identity** matrix
7. where |Σ| denotes the **determinant** of Σ,
8. Then A_y is the triangle with **vertices** (0, 0),(y, 0) and (0, y).
9. you can imagine a **diagonal** line starting from the point (0, y) and extending to the point (y, 0) within the square region.
10. This diagonal line represents the **locus of points** (X1, X2) that satisfy the equation X1 + X2 = y.

- urn![urn](https://images-cdn.ubuy.co.in/63512e08b0d16230b072f506-smartchoice-personalized-urns-for-human.jpg)

## 0715

1. If we **substitute** X1 and X2 from any point on this line into the equation X1 + X2 = y, we will find that the equation holds true.

![s](2023-10-02-16-08-07.png)
