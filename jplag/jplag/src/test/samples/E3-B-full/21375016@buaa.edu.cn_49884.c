"""
2022-03-28 21:22:54
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include<stdio.h>
int main()
{
	int a[100],n,i,j,sum;
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		sum=0;
		for (j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			   sum=sum+j;
		}
		if (sum==a[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
return 0;

}