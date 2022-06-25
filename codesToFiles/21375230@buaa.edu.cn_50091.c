"""
2022-03-26 16:16:22
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1552 KB
Accepted | 1 * (1 / 10) | 14 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 14 ms | 1648 KB

"""

#include <stdio.h>

int main()
{   
 unsigned long long i, t=1, n;
 double c=0;
 scanf("%llu",&n);
 if(n<=17)
 {
 
  for(i=1;i<=n+1;i++)
  {
  c+=1.0/t;
  t*=i;
  }
}
 else
 {
  n=17;
  for(i=1;i<=n+1;i++){
  c+=1.0/t;
  t*=i;
 }
 }

 printf("%.14lf\n",c);

 return 0;
}