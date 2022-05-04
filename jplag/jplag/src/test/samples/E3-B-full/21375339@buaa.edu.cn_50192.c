"""
2022-03-26 15:48:50
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 5 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k,b,a[101],sum[101]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
    for(j=1;j<a[i];j++)
    {
    	b=a[i]%j;
    if(b==0)
    {
    	sum[i]+=j;
	}
	}
	}
	for(i=0;i<n;i++)
	{
		if(sum[i]==a[i])
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