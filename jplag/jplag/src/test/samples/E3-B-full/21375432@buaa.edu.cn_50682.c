"""
2022-03-29 21:40:37
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1664 KB

"""

# include <stdio.h>
int main()
{
 int n;
    int i,j;
 int x[100];
 int sum=0;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&x[i]);
 }
for(i=1;i<=n;i++)
 {
     for(j=1;j<x[i];j++)
     {
       if(x[i]%j==0)
          sum+=j;
     }
     if(sum==x[i])
      printf("YES\n");
      else
      printf("NO\n");
     sum=0;
    }
 return 0;
}