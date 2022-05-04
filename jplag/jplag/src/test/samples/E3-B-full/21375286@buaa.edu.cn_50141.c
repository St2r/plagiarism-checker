"""
2022-03-26 11:23:05
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1528 KB
Accepted | 1 * (35 / 100) | 17 ms | 1652 KB
Accepted | 1 * (60 / 100) | 16 ms | 1616 KB

"""

#include <stdio.h>
int main()
{
	int n,a,i,sum;
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{	
		sum=0;
		scanf("%d",&a);
	for(i=1;i<a;i++)
		if(a%i==0)
		{
			sum+=i; 
		}
	if(sum==a)
	{
		printf("YES");
	}
	else
	{	
		printf("NO");
	}
	if(j<n)
	{
		printf("\n");
	}
	}
}