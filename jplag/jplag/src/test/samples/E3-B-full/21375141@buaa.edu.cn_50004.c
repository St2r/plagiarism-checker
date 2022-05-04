"""
2022-03-27 15:29:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1540 KB

"""

#include<stdio.h>
int main()
{
	int i,n,j,a,sum=0;
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		scanf("%d",&a);
    
    for(j=1;j<=a-1;j++)
	{
		if(a%j==0)
		{
			sum=sum+j;
		}
	}

		if(a==sum)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
	}
}