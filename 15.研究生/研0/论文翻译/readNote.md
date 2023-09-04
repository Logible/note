# read note

- [read note](#read-note)
  - [words](#words)
  - [question](#question)

## words

- a decentralized setting
  - In the context of local differential privacy (LDP), a decentralized setting refers to a scenario where data is **collected and processed locally on individual devices or nodes**, rather than being sent to a central server for analysis. Each node independently applies privacy mechanisms, such as LDP, to protect sensitive information before sharing or aggregating the data with other entities.

we propose a novel trajectory perturbation mechanism that relies solely on an underlying location set and satisfies pure 𝜖-LDP to provide a stringent privacy guarantee. In the proposed mechanism, each point’s adjacent direction information in the trajectory is used in its perturbation process.

what does the "𝜖-LDP" denotes?

- Local differential privacy (LDP)
  - is a model of differential privacy with the **added restriction** that even if an adversary has access to the personal responses of an individual in the database, that adversary will still be unable to learn too much about the user's personal data.

- underlying location set
  - the term "underlying location set" refers to **a set of locations** that serve as the foundation or basis for the trajectory perturbation mechanism. It represents the **original locations or points in the trajectory** that need to be protected for privacy reasons.

![20230729235531](https://raw.githubusercontent.com/Logible/Image/main/note_image/20230729235531.png)

- (Sequential Composition) Let each $M_𝑖(1 ≤ 𝑖 ≤ 𝑛)$ denote a mechanism satisfying $\epsilon_𝑖-LDP$. Then the sequential combination of these mechanisms satisfies $\epsilon-LDP$, where $\epsilon = \sum_{i=1}^{n}\epsilon_i$

- the k-RR

  $$Pr[M (𝑥) = 𝑦] = \begin{cases}
  \frac{e^\epsilon}{|X|-1+e^\epsilon}, &\text{if y = x}\\
  \frac{1}{|X|-1+e^\epsilon}, &\text{otherwise}
  \end{cases}$$

## question

No, that's a common misconception. In the case of the Exponential Mechanism, a larger value of $\varepsilon$ actually indicates a lower level of privacy.

Essentially, $\varepsilon$ determines the amount of noise that is added to the selection process. A higher $\varepsilon$ means less noise is added, resulting in a higher likelihood of selecting items with higher scores, and therefore potentially revealing more information about the dataset. This can compromise privacy.

Conversely, a smaller value of $\varepsilon$ means more noise is added, making the selection process more random and increasing the level of privacy. However, this can also reduce the accuracy of the selections since less weight is given to highly scored items.

Therefore, the choice of $\varepsilon$ in the Exponential Mechanism involves a trade-off between privacy and accuracy. A larger $\varepsilon$ provides better accuracy but compromises privacy, while a smaller $\varepsilon$ offers better privacy but sacrifices accuracy.

⭐⭐⭐⭐

the$\epsilon$more bigger, the privacy better?

- (use Latex to display the content which inside the $$)
