# 2020 Round H

-   Score : 100
-   Rank : 157
-   2020的KS全部结束啦
    今天入场晚了，中间还一度脑残，还好题目真简单
---

## A

- 模拟一下两种情况，取较小值即可

## B

- 不知道为啥一个数位DP出到了第二题= =
- 我们算一下$[1, k]$区间内有多少个合法数字，然后两个前缀对减即可
- 合法数字的计算，位数不够的部分可以看出就是$\sum_{i=1}^{n-1} 5^i$，位数相同的部分用数位DP

## C

- 纵坐标很好确定，就是所有纵坐标的中位数
- 横坐标就是排好序之后$x_i-i$的中位数
- 扩展一下 : 这一类曼哈顿距离的问题，本质上是个单峰函数；另外也可以考虑随着固定点的移动，其他所有点要移动的距离情况，具体分析一下基本都是中位数问题

## D

- 我们考虑如果计算每两个人之间朋友距离，那复杂度直接裂开
- 但是因为朋友关系的传递本质是字母到字母的距离，因此我们可以通过计算字母间的距离来看
- $O(26)$跑一个Floyd之后，每次查询只需要看一下两个人名字里每一对字母间的距离最小值即可
