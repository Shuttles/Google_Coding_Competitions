/*****************************************
Author: lizi
Email: lzy960601@gmail.com
Date: 2020-09-27
File: A.cpp
*****************************************/
  
#include<bits/stdc++.h>
  
using namespace std;
  
const double eps = 1e-10;
const double pi = 3.1415926535897932384626433832795;
const double eln = 2.718281828459045235360287471352;

#ifdef __LOCAL_DEBUG__
# define _debug(fmt, ...) fprintf(stderr, "[%s] " fmt "\n", \
    __func__, ##__VA_ARGS__)
#else
# define _debug(...) ((void) 0)
#endif

#define IN freopen("A.in", "r", stdin)
#define OUT freopen("A.out", "w", stdout)
#define scd(x) scanf("%d", &x)
#define scld(x) scanf("%lld", &x)
#define scs(x) scanf("%s", x)
#define mp make_pair
#define pb push_back
#define sqr(x) (x) * (x)
#define prcas printf("Case #%d: ", cas)
#define pncas printf("Case #%d:\n", cas)
#define lowbit(x) ((x) & (-(x)))
#define fi first
#define se second
typedef long long LL;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef vector<int> vi;

const int maxn = 100005;
int n, m, T;

struct people
{
    int id, money, round;
    bool operator < (const struct people &p) const
    { return round < p.round || (round == p.round && id < p.id); }
    void read(int k)
    {
        id = k; scd(money);
        round = (money + m - 1) / m;
    }
}a[maxn];

int main()
{	
    scd(T);
    for(int cas = 1; cas <= T; ++ cas)
    {
        scanf("%d%d", &n, &m);
        for(int i = 1; i <= n; ++ i) a[i].read(i);
        sort(a + 1, a + n + 1);
        prcas;
        for(int i = 1; i <= n; ++ i) printf("%d%c", a[i].id, i == n ? '\n' : ' ');
    }
    return 0;
}
