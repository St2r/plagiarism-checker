"""
2022-03-27 23:55:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	/*int n,i,j,a[1005],num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				num++;
			}
		}
	}
	printf("%d\n",num);*/
	int n,i,j,a,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		sum=0;
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==a)
		{
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}