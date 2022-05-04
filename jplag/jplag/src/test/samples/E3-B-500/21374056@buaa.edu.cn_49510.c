"""
2022-03-26 10:43:48
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1612 KB
Accepted | 1 * (1 / 4) | 14 ms | 1688 KB
Accepted | 1 * (1 / 4) | 2 ms | 1524 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
	int n,i,a,b,k,c;
	k=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(int j=1;j<a-1;j++)
		{
			b=a%j;
			if(b==0)
			{
				k=k+j;
			}
		}
		if(k==a)
		{
			printf("YES");
		}
		if(k!=a)
		{
			printf("NO");
		}
		k=0;

	}
	return 0;
}