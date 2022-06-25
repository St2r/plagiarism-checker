"""
2022-03-28 20:56:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include <stdio.h>
int main()
{
 int n;
 double a=1.0,b=1.0;
 scanf("%d",&n);
 if(n>33)
  n=33;
 for(int i=1;i<=n;i++)
 {
    b= b*i;
  a=a+1.0/(b);
  

 }


    printf("%.14f",a);



return 0;
}