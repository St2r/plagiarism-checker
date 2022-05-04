"""
2022-03-29 19:22:53
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 3 ms | 1620 KB

"""

#include <stdio.h>
	int s[10000]={0};
int main()
{
	int n,i,j,a,b,sum;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<a;j++)
		{
			b=j;
			if(a%b==0)
			s[j-1]=j;
		}
		for(j=0;j<a-1;j++)
		{
			sum+=s[j];
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
		for(j=0;j<a;j++)
		{
			s[j]=0;
		}
	}
	return 0;
}