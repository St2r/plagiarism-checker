"""
2022-03-28 15:32:06
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1584 KB

"""

#include<stdio.h>
int main()
{int a[10000] ={0},n,i,m,sum=0;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
	for(m=1;m<a[i];m++)
	{
		if(a[i]%m==0)
		{
			sum+=m;
		}
	}
	if(sum==a[i])
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
		sum=0;
	}
}
	return 0;
}