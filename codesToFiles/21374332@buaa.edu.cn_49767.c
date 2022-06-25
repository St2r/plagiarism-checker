"""
2022-03-28 20:03:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main()
{int i;
long long t=1;
double e=0;
 int n;
 scanf("%d",&n);
 if(n<=17)
 {
 
 for(i=1;i-1<=n;i++)
 {e+=1.0/t;
  t*=i;
 }
 printf("%.14lf",e);
}
else
{
	printf("2.71828182845905");
}
 return 0;
}