"""
2022-03-28 12:11:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1624 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include <stdio.h>
int main() {
 int n;
 int x[1024],sum=0;
 scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &x[i]);
 }
 
 for (int i = 0; i < n; i++)
 {
   sum = 0;
   for (int j = 1; j < x[i]; j++)
   {
     
    if (0 == x[i] % j)
     sum += j;
   }
   if (x[i] == sum)
   {
    printf("YES\n");
   }
   else
   {
    printf("NO\n");
   }
 }
  
 
 return 0;
}