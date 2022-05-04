"""
2022-03-27 21:38:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
int n, a;
int i=1, s=0;
scanf("%d",&n);
  while(n--)
    {
     scanf("%d",&a);
     for (i=1 ; i < a; i++)
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
  s=0;
    }
    return 0;
}