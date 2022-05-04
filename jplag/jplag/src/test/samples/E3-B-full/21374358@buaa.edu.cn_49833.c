"""
2022-03-27 16:59:54
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1628 KB
Accepted | 1 * (35 / 100) | 11 ms | 1568 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n,i,sum=0,a;
	scanf("%d",&n);
	while(scanf("%d",&a)!=EOF)
	{
		if(a==1)
		{
			printf("No\n");
			sum=0;
		}
		else
		{
			for(i=1;i<a;i++)
			{
				if(a%i==0)
				{
					sum=sum+i;	
				}
			}
			if(sum==a)
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
return 0;
}