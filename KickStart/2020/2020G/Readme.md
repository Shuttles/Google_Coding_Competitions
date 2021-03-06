# 2020 Round G

-   Score : -
-   Rank : -
-   感谢`sylxjtu`提供的代码和题解
---

## A

- 找到所有 KICK 出现的位置和 START 出现的位置，对每个 KICK 二分找它之后有多少个 START ，加起来就是答案

## B

- 维护每个斜线上所有数值的和，找最大的，比A简单

## C

- 考虑把环找一个地方切开，变成线段上找距离所有点的和最小的点的问题，奇数个点选中位数，偶数个点选中间两点之一即为最优解
- 枚举最后的汇合点，计算所有其他点到这个点的距离和即可，代码里面可以把环复制三份，维护前缀和
- 需要注意奇偶分别讨论的边界情况

## D

- 结论：每个区间 $[l, r)$ 合并分数的期望 $E(l, r)$ 等于所有可能合并方式中两个子区间期望之和的平均，再加上该区间本身的数字之和。
- $E(l, r) = (\sum_{i = l + 1}^{r - 1} E(l, i) + E(i, r)) / (r - l) + \sum_{i = l}^{r - 1} A_i $
- 区间 dp 可以 $O(n^3)$ 解决，把 dp 矩阵画出来，每个点需要加的值就是它左边的所有值和它下面的所有值，维护这个和就可以优化到 $O(n^2)$
