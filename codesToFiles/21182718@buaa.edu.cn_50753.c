"""
2022-03-30 13:49:42
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1672 KB

"""

int main()
{
    long long n;
    scanf("%lld", &n);
    if (n > 17)
        printf("2.71828182845905");
    if (n <= 17) {
        int i = 1;
        double d = 1.0, sum = 0;
        while (i <= n) {
            sum += 1 / d;
            d *= i + 1;
            i++;
        }
        printf("%.14lf", 1 + sum);
    }
    return 0;
}