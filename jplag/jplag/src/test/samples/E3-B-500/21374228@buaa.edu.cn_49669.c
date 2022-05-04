"""
2022-03-29 20:14:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
	int n,m,i,j,k,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
					sum=0;
		for(j=1;j<=m;j++)
		{

			if(m%j==0)
			{
				k=j+m/j;
				sum=sum+k;
			}
			
		}if(m==(sum/2)-m)
			{
				printf("YES\n");
			}
			if(m!=(sum/2)-m)
			{
				printf("NO\n");
			}
//	printf("%d ",m);
	}
	return 0;
 }