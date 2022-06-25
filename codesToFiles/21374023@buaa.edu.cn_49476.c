"""
2022-03-27 11:06:05
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 2 ms | 1644 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 3 ms | 1648 KB
B

"""

int n,k=1;
    double s=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        k *= i;
        double p = (1.0 / k);
        if (p >= F)
            s += p;
    }
    printf("%.14f", s);