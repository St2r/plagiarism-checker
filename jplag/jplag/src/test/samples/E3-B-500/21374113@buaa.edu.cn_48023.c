"""
2022-03-29 10:35:23
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 1 ms | 1688 KB

"""

#include <stdio.h>
long long powerOf(int x, int p)
{
    long long ans = 1;
    while(p)
    {
        if(p & 1)
            ans *= x;
        x *= x;
        p >>= 1;
    }
    return ans;
}

int prime[1000], primecnt = 0, vis[1000] = {0};
void primeSieve(int n)
{
    for(int i = 2; i <= n; ++i)
    {
        if(!vis[i])
            prime[primecnt++] = i;
        for (int j = 0; j < primecnt && prime[j] * i <= n; ++j)
        {
            vis[prime[j] * i] = 1;
            if(i % prime[j] == 0)
                break;
        }
    }
}

long long sigma(int x)
{
    long long ans = 1;
    for(int i = 0, cnt = 0, u = prime[0]; u * u <= x && x; i++, (cnt = 0), u = prime[i])
    {
        while(x % u == 0)
        {
            cnt++;
            x /= u;
        }
        ans *= (powerOf(u, cnt + 1) - 1) / (u - 1);
    }
    if(x != 1) ans *= (x + 1);
    return ans;
}
const char *S[] = {"NO\n", "YES\n"};
int main()
{
    primeSieve(120);
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        printf(S[sigma(x) == 2 * x]);
    }
    return 0;
}