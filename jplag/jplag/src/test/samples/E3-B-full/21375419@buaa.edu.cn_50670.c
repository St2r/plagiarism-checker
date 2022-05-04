"""
2022-03-29 18:53:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
	int n,i,p,sum;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	
	for(i=0;i<n;i++)
	{
		p=1;
		sum=0;
		while(p<a[i])
		{
			if(a[i] % p==0)
			{
				sum=sum+p;
			}
			p++;
		}
		if(sum==a[i])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
		if(i<n-1)
		{
			printf("\n");
		}
	}
	
	return 0;
}