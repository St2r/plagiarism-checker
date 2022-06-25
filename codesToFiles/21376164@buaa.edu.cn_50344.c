"""
2022-03-26 09:54:46
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 13 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
      int n,i,j,k;
      double a[100]={0,1},b[100]={0,1};
      double eps = 1e-14;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
            for(j=1;j<=i;j++)
            {
                  a[j+1]=(1.0/j)*a[j];
            }
            b[i+1] = b[i]+a[i+1];
            if(b[i+1]-b[i]<eps)
                  break;
      }
      printf("%.14lf",b[i]);
      return 0;
}