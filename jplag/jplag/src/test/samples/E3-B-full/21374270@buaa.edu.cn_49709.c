"""
2022-03-27 10:45:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1584 KB
Accepted | 1 * (35 / 100) | 2 ms | 1524 KB
Accepted | 1 * (60 / 100) | 15 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,sum;
	scanf("%d",&n);
    while(n--)
	{
		sum=0;
		scanf("%d",&x);
		for(i=1;i<=x/2;i++)
		{
			if(x%i==0)
			sum+=i;
			
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
	return 0;
}