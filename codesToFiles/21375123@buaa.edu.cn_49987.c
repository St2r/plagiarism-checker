"""
2022-03-29 22:35:28
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 0 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main()
{
    int n;
   double sum = 1;
   double  temp = 1;
      scanf("%d", &n);
 for (int i = 1; i <= n; i++) {
    temp *= i;
  sum += 1.0 / temp;
 }
   printf("%.14lf",sum);
 return 0;
}