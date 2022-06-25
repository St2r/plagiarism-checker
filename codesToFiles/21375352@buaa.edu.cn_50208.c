"""
2022-03-29 16:54:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include<stdio.h>
int main()
{int n,i;
i=1;

double m,sum;
sum=1; 
m=1;
scanf("%d",&n);
if(n<=17)
{
	   for (i=1;i<=n;i++)
    {
	m=m*i; 
    sum=sum+(1.0/m);}
printf("%.14f",sum) ; 
}
if(n>17)
{n=17;
 for (i=1;i<=n;i++)
    {
	m=m*i; 
    sum=sum+(1.0/m);}
printf("%.14f",sum) ; 
}
return 0;	
}