"""
2022-03-26 18:03:56
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2048 KB
Accepted | 1 * (35 / 100) | 2 ms | 2052 KB
Accepted | 1 * (60 / 100) | 3 ms | 2100 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int wanshu(int x);
int main()
{
  int n,i,x,m;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&x);
      a[i]=x;
  }
  for(i=0;i<n;i++)
  {
      m=wanshu(a[i]);
      if(m==1) printf("YES\n");
      else printf("NO\n");
  }
  return 0;
}
int wanshu(int x)
{
    int sum=1,n;
    for(n=2;n<=sqrt(x);n++)
    {
        if(x%n==0)
        {
            sum=sum+n+x/n;
        }
    }
    if(sum==x) return 1;
    else return -1;
}