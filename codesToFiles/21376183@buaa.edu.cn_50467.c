"""
2022-03-29 23:45:29
WA
0.0
Wrong Answer | 0 * (1 / 10) | 1 ms | 1748 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1680 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1736 KB
Wrong Answer | 0 * (2 / 10) | 0 ms | 1636 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
#include<math.h>
#define eps pow(1,-15)
long long jc(long long);
int main()
{
 long long n;
 scanf("%lld",&n);
 double e=1.0,x;
 1/jc(x)<=eps;
 if(n>x) 
 n=x;
 for(long long i=1;i<=n;i++)
 e=e+1.0/ jc(i);
 printf("%.14f",e); 
 return 0;
}
long long jc(long long n)
{
 long long jc=1;
 for(long long i=1;i<=n;i++)
 jc=jc*i;
 return jc;
}