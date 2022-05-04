"""
2022-03-28 16:48:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 2 ms | 1744 KB
Accepted | 1 * (60 / 100) | 4 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
	int n,x[101]={0},i,b[10005]={0},p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		b[0]=1;
		for(p=2;p<x[i];p++)
		{
			q=x[i]%p;
			if(q==0)
			{
				b[p]=p;
			}
		}
		q=0;
		for(p=0;p<x[i];p++)
		{
			q+=b[p];
			b[p]=0;
		}
		if(q==x[i])
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