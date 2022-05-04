"""
2022-03-28 21:57:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1572 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	int a,e[105],sum=0,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&e[i]);
		for(a=1;a<e[i];a++)
	    {
	    	if(e[i]%a==0)
	    	sum=sum+a;
		}
		if(sum==e[i])
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}