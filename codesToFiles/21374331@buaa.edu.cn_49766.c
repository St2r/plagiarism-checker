"""
2022-03-26 22:33:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 11 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1688 KB

"""

#include<stdio.h>
int main()
{   int n;
    double m=1,i=1,q=1,o=1;
    scanf("%d",&n);
  if(n>19)
  {
      n=19;
    while(i<=n)
    {   while(o<=i)

 {q=q*o;
 o++;


 }
        m=m+1/q;
        i++;
        o=1;
        q=1;
    }
 printf("%.14f",m);}
 else
 {
      while(i<=n)
    {   while(o<=i)

 {q=q*o;
 o++;


 }
        m=m+1/q;
        i++;
        o=1;
        q=1;
    }
 printf("%.14f",m);}

    return 0;
}