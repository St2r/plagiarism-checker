"""
2022-03-26 10:52:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 12 ms | 1584 KB
Accepted | 1 * (60 / 100) | 13 ms | 1532 KB

"""

#include<stdio.h>

int main()
{
	int n,x=0,i=1,j=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		sum=0;
		for(j=1;j<=x;j++)
		{
			if(x%j==0)
		    {
			sum=sum+j;
		    }
		}

		if((sum-x)==x)
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