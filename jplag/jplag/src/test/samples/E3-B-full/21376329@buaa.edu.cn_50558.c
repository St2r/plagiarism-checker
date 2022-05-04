"""
2022-03-27 21:16:06
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 2104 KB
Accepted | 1 * (35 / 100) | 12 ms | 1940 KB
Accepted | 1 * (60 / 100) | 2 ms | 2104 KB

"""

# include <stdio.h>
# include <math.h>
int count;
int math(int n);
int main(void)
{
	extern int count;
	int n, x;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (x == math(x))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
int math(int n)
{
	extern int count;
	count = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (i == sqrt(n))
			count = count + i;
		if (n % i == 0)
			count = count + i + (n / i);
		else
			continue;
	}
	return count;
}