#### So, how to calculate the minimum number of swaps needed to transform a permutation a to another permutation b? This is actually a well-known problem. The idea is, we build a graph with undirected edges (ai,bi). The minimum number of swaps will be equal to n−c, where c is equal to the number of connected components in the resulting graph.

---

#### 모든 i 에 대해서, a[i]와 b[i]를 연결하는 간선을 만들고, n(노드 수) - c(그래프의 컴포넌트 수)를 계산하면 된다.



