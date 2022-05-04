"""
2022-03-26 19:32:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[1000];
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		int sum=0;
		for(int i=1;i<a[j];i++)
		{
			if(a[j]%i==0)
			sum+=i;
		}
		if(sum==a[j])
		printf("YES\n");
		else
		printf("NO\n");
	}
}