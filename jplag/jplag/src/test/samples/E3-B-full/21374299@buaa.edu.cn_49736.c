"""
2022-03-26 08:56:50
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1672 KB
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 3 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
    int n,a[110],i,b,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);


          for(b=1;b<a[i];b++)
      {
          if(a[i]%b==0)
            s+=b;
      }
      b=1;
      if(s==a[i])
        printf("YES\n");
      else printf("NO\n");
      s=0;}

      return 0;
}