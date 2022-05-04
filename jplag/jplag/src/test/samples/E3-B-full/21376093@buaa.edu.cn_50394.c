"""
2022-03-27 13:59:00
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB
B

"""

#include<stdio.h>
int main()
{
int n, a, i=0, s=0;
scanf("%d",&n);
  while(n--)
    {
     scanf("%d",&a);
     for (i = 1 ; i < a; i++)
       {
         if(a % i == 0)
         {
           s = s + i;
          }
        }
  if(s == a)
  printf("YES\n");
  else
  printf("NO\n");
  s = 0;
    }
  return 0;

}