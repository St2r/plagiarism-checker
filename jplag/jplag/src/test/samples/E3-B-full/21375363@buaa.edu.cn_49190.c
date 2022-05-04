"""
2022-03-26 11:01:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		for(j=1;j<=sqrt(a);j++)
		{
			if(a%j==0)
			{
				/*b[c]=j;
				c++;
				if(j!=sqrt(a))
				{
				b[c]=n/j;
				c++;
				}*/
				sum+=j;
			if(j!=sqrt(a))
			{
				sum+=(a/j);
			}
			//printf("%d ",sum);	
			}
		}
		if(sum==2*a) printf("YES");
		else printf("NO");
		printf("\n");
	}
}