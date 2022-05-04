"""
2022-03-29 21:50:20
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1588 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n,a[101];
	int sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&a[i]);
		for(int j=1;j<a[i];j++)
		{
		    if(a[i]%j==0)
		    {
			    sum=sum+j;
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