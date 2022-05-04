"""
2022-03-29 22:13:06
REG
0.0
Runtime Error (SIGSEGV) | 0 * (5 / 100) | 132 ms | 1384 KB
Runtime Error (SIGSEGV) | 0 * (35 / 100) | 133 ms | 1372 KB
Runtime Error (SIGSEGV) | 0 * (60 / 100) | 130 ms | 1536 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,r,sum=0,a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",r);
		a[i]=r;
		for(j=1;j<a[i];j++)
		{if(a[i]%j==0)
			sum+=j;
		}
		if(sum==a[i])
		printf("Yes");
		else printf("No");
		}
	return 0;
}