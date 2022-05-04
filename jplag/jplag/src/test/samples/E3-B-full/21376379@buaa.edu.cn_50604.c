"""
2022-03-27 21:23:09
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include <stdio.h>
int main() 
{
    int i,n,a,m,num=1,sum=0;
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		for(m=1;m<a;m++)
		{
			if(a%m==0)
			{
			sum+=m;
			}
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
    return 0;
}