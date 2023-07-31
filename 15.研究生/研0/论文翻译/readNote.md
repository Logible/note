# read note

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
