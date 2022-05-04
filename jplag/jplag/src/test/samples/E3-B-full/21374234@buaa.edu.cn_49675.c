"""
2022-03-26 15:04:44
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 5 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int a,b,n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(b=1,sum=0;b<a;b++)
		{
			if(a%b==0) 
			{
				sum=sum+b;
			}
		}
		if(sum==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}