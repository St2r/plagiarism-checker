"""
2022-03-29 20:38:17
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include<stdio.h> 
int main()
{double n,i;
double m=1,e=1;
scanf("%lf",&n);
if(n<18)
{
for(i=1;i<=n;i++)
{
	m=m/i;
	e+=m;
}
}
else
{
    for(i=1;i<=17;i++)
{
	m=m/i;
	e+=m;
}	
}
	printf("%.14f\n",e);
	return 0;
}