"""
2022-03-28 23:16:37
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include <stdio.h>
int main()
{
	int n,x[105],i,a,sum=0;
	scanf("%d",&n);	
	for(i=0;i<n;i++)
{
		scanf("%d",&x[i]);
		for(a=1;a<x[i];a++)
		{
			if(x[i]%a==0)
			{sum=sum+a;}
		}
		if(sum==x[i])
		printf("YES\n");
		if(sum!=x[i])
		printf("NO\n");
		sum=0;
	}
	return 0;
}