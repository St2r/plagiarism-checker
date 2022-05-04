"""
2022-03-26 14:52:28
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1656 KB
Accepted | 1 * (35 / 100) | 9 ms | 1640 KB
Accepted | 1 * (60 / 100) | 10 ms | 1628 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
      int a[110]={0},n,i,j,k,sum;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
            sum=0;
            for(k=1;k<=a[i]/2;k++)
            {
                  int b[10010]={0};
                  int m=0;
                  if(a[i]%k == 0)
                  {
                        b[m]=k;
                  }
                  sum =sum+b[m];
                  m++;
            }
            if(sum == a[i])
                  printf("YES\n");
            else
                  printf("NO\n");
      }
      return 0;
}