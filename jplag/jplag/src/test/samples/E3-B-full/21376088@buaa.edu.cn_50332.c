"""
2022-03-29 23:00:22
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int n,m,i,i1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(i1=1;i1<m;i1++)
		{
			if(m%i1==0)
			sum=sum+i1;
		}
     
    if(sum==m)
    {
    	printf("YES\n");
    sum=0;
	}
    else
    {
    	printf("NO\n");
    sum=0;
	}
}
	return 0;
}