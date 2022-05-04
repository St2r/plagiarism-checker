"""
2022-03-26 18:21:47
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include<stdio.h>

int main()
{
	int n,a[1000],i,j=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			   sum=sum+j;
		}
		if(sum==a[i])
		   printf("YES\n");
		else
		   printf("NO\n");
	}
	
	return 0;
}