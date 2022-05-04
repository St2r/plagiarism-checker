"""
2022-03-26 12:53:27
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1716 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100]={0},i,j,num=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				num+=j;
			}
		}
		if(num==a[i])
		{
			printf("YES\n");
		}else
		{
			printf("NO\n");
		}
		num=0;
	}
	return 0;
}