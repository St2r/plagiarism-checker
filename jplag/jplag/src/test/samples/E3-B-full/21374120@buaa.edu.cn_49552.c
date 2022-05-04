"""
2022-03-28 10:29:12
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1660 KB
Accepted | 1 * (35 / 100) | 5 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include <stdio.h>
int main()
{
int n,x,i,a,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	sum=0;
scanf("%d",&x);
for(a=1;x/2>=a;a++)
{
	if(x%a==0)
	{
	sum=sum+a;
	}
}
if(sum==x)
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
	return 0;
}