"""
2022-03-26 14:11:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j, sum;

	int a[10005];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
{
		for(i=1;i<=n;i++)
	{	sum=0;
		{
		for(j=1;j<a[i];j++)
		if(a[i]%j==0)
	    sum=sum+j;
		}
	{
	if(sum==a[i])
	printf("YES\n");
	else
	printf("NO\n");
	}
}
}

}