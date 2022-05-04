"""
2022-03-27 17:20:18
AC
1.0
Accepted | 1 * (5 / 100) | 13 ms | 1628 KB
Accepted | 1 * (35 / 100) | 14 ms | 1472 KB
Accepted | 1 * (60 / 100) | 16 ms | 1472 KB

"""

#include<stdio.h>
int main()
{
	int n,a[200],i,j,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			  sum+=j;
		}
		if(sum==a[i]*2)
		  printf("YES\n");
		else 
		  printf("NO\n");
		sum=0;
	}
	return 0;
}