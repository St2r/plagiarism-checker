"""
2022-03-26 14:56:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 12 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
int n,i,a,sum;
scanf("%d",&n);
for(int j=1;j<=n;j++){
	scanf("%d",&a);
{
sum=0;
for(i=1;i<=a;i++)
{if(a%i==0&&i!=a)
sum+=i;}
}
if(sum==a)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}