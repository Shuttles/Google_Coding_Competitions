# 2019 Round E

-   Score : 100
-   Rank : 87

---

## A

- 并查集或者FloodFill寻找连通块，然后算一算就可以了

## B

- 我们考虑从全Coding向回推
- 对于每个时间段整段考虑，我们想要知道在Coding的收益$\geq A_i$的情况下，Eating的最大收益
- 那么我们显然可以把时间段按性价比排序然后贪心
- 对查询也排序，双指针即可

## C

- 答案只有可能是以下几种
  - $1, 4, 8$
  - $2$倍的奇数
  - 奇质数
  - $4$倍的奇质数
- 质数计数可以使用区间筛，也可以使用暴力循环+MillerRabin判定
