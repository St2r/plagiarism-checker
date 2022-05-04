"""
2022-03-27 17:23:07
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1704 KB
Accepted | 1 * (39 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 3 ms | 1544 KB

"""

# include <stdio.h>
int main()
{
	int n,i,j,a,sum;
	scanf("%d\n",&n);
	
	for(i=0;i<n;i++)
	{
	    sum=1;
		scanf("%d",&a);
		for(j=2;j<=a/2;j++)
		{
			if(a%j==0)
			{
				sum=sum+j;
			}
		}
			if(sum==a)
		{
			printf("Yes\n");
		}
		if(sum!=a)
		{
			printf("No\n");
		}
	}

	return 0;
}