"""
2022-03-26 17:21:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include<stdio.h>
int a[101];
int main()
{
	int n;
	int i=0;
	int num;
	int sum;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&num);
		a[i]=num;
		i++;
	}
	for(i=0; i<n; i++)
	{
		sum=1;
		for(int k=2; k<=a[i]/2; k++)
		{
			if(a[i]%k==0)
			{
				sum+=k;
			}
		}
		if(sum==a[i])
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