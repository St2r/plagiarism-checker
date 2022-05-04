"""
2022-03-29 20:30:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1588 KB
Accepted | 1 * (35 / 100) | 4 ms | 1540 KB
Accepted | 1 * (60 / 100) | 15 ms | 1592 KB

"""

#include <stdio.h>
int main(void)
{
 int m,j;
 scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
	
 int n, sum, i;
 while (scanf("%d", &n) == 1) 
 {
  for (i = 1, sum = 0; i < n; ++i)
  {
   if (n % i == 0)
    sum += i;
  }
  if (sum == n)
   puts("YES");
  else
   puts("NO");
 }
}
 return 0;
}