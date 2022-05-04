"""
2022-03-28 19:42:57
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2064 KB
Accepted | 1 * (35 / 100) | 1 ms | 2096 KB
Accepted | 1 * (60 / 100) | 1 ms | 2176 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n,a[105],i,j,x,index=0,sum=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=1;
		index=0;
		scanf("%d",&x);
		for(j=2;j<=sqrt(x);j++)
		{
			if(x%j==0)
			{
				sum+=j+x/j; 
//				a[index++]=j;
//				a[index++]=x/j;
			}
		}
//		for(j=0;j<index;j++)
//		{
//			sum+=a[j];
//		}
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