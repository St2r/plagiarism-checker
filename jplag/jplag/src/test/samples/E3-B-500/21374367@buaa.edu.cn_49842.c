"""
2022-03-26 09:41:51
AC
1.0
Accepted | 1 * (3 / 5) | 9 ms | 2096 KB
Accepted | 1 * (1 / 5) | 10 ms | 2168 KB
Accepted | 1 * (1 / 5) | 16 ms | 2292 KB


"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,ff[10001]={0},a,i,sum;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		for(i=1;i<a;i++)
		{
			if(a%i==0)
			{
				ff[i]=i;
			}else ff[i]=0;
		}
		sum=0;
		for(i=1;i<a;i++)
		{
			sum+=ff[i];
		}
		if(sum==a)
		{
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		ff[10001]={0};
	}
return 0;
}