"""
2022-03-27 15:07:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2024 KB
Accepted | 1 * (35 / 100) | 12 ms | 1936 KB
Accepted | 1 * (60 / 100) | 4 ms | 2096 KB
B

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,j,k,a,sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&a);
		for(j=2;j<=sqrt(a);j++)
		{
			for(k=j;k<a;k++)
			{
				if(j*k<=a)
				{
					if(j*k == a)
					{
						sum=sum+j+k;
						break;
					}
				}
				else
					break;
			}
		}
		sum++;
		if(sum==a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}