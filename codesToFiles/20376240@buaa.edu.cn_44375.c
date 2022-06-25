"""
2022-03-29 00:06:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
      int i,n,a,b,j;
      double sum1,sum0=1,sum=1;

      scanf("%d",&n);
    if(n<18)
      {for(i=1;i<=n;i++)
      {
          sum0=1;
          for(j=1;j<=i;j++)
          {
              sum0*=j;
          }
          sum1=1/sum0;
          sum+=sum1;
      }
      }
    else
    {for(i=1;i<=18;i++)
      {
          sum0=1;
          for(j=1;j<=i;j++)
          {
              sum0*=j;
          }
          sum1=1/(sum0*1.0);
          sum+=sum1;
      }

    }
      printf("%.14f",sum);
      return 0;
}