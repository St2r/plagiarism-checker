"""
2022-03-26 20:42:12
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 4 ms | 1640 KB


"""

#include<stdio.h>
int main()
{
	int n,a,i,x,sum;
	scanf("%d",&n);
	while(scanf("%d",&x)!=EOF)
	{sum=0;
	for(i=x-1;i>0;i--)
		{if(x%i==0)
			sum=sum+i;
		}
	if(sum==x)
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}