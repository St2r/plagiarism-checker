"""
2022-03-28 23:29:03
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1648 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include<stdio.h>

int main()
{
 int arr[100] = { 0 };
 int n = 0;
 int i = 0;
 int j = 0;
 int num = 0;
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]);
 }
 for (i = 0; i < n; i++)
 {
  for (j = 1; j < arr[i]; j++)
  {
   if (arr[i] % j == 0)
   {
    num += j;
   }
  }
  printf("%s\n", num == arr[i] ? "YES" : "NO");
  num = 0;
 }
 return 0;
}