# 2020 Round E

-   Score : 59
-   Rank : 117
-   今天状态极差...没有1A的题
    最后一题思路是对，但是没调出来，唉
    以后再也不乱立flag了qwq

---

## A

- 因为是连续子序列，线性判一下就行了

## B

- 分成$C = 1$和$C \geq 2$两种情况分别整活
- 事实上就是个大讨论

## C

- 通过分析可以发现以下几个简单结论
    - 一个玩具的休息时间等于剩余玩具娱乐时间的和，同样等于所有玩具娱乐时间和减去自己的娱乐时间
        因此满足要求需要$\sum E - E_i \geq R_i \Leftrightarrow \sum E \geq E_i + R_i$
    - 如果一个玩具不满足要求，那么删去其他玩具更不会让当前玩具满足要求
- 所以我们得到了一个显然的做法，就是按照$E_i + R_i$排序，从大往小依次删除，并测试能否无限循环
- 无限循环判定结束以后，我们来考虑有限的情况，显然小朋友只能玩两轮不到，否则他就能一直玩了
- 考虑到顺序不能变，我们就从第一个开始向后枚举终点
- 根据结论，如果当前玩具不能玩第二次，就直接把他删了，因为删去其他玩具他还是不可能玩第二次
- 注意动态删除之前可以玩第二次，但删除当前玩具之后就不行的玩具，利用优先队列即可
- 模拟这个过程，并统计最大值，总复杂度$O(n \log n)$

## D

- 少了一句`Combine(p, t);`导致没有AK...我裂开了= =，果然状态不好
- 先用Floyd处理出任意两点间最短路
- 我们令$\text{Stone}_{i, j}$表示在$i$号点获取一块$j$号石头的代价
- 对于一次状态更新`(地点, 石头种类, 开销)`，我们有两种更新方式
  - 从这个地点将这种石头搬运到其他地方
  - 对于$\text{Stone}_{i, j}$变小的地方，我们尝试利用$j$石头去进行合成，并作对应种类石头的更新
- 利用类似于堆优化Dijkstra的方法来重复更新直到完成，最后统计答案

​    