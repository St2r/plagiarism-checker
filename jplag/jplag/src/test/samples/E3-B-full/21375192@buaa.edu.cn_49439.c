"""
2022-03-29 22:12:03
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1624 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 1656 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1740 KB

"""

#include<stdio.h>
int main()
{
int n,x,i,a,b,c;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&x);
	c=1;
	0<a<=b<x;
	for(a=1;a<=x;a++)
	{
	if(a*b==x)
	{
		c=c+a+b;
	}
    }
    printf("%d",c); 
	}


return 0;
}