"""
2022-03-26 14:46:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1596 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB
704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 820 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int n,i,j,sum=0;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	{
		sum=0;
		for(j=1;j<=x[i]/2;j++)
		{
			if(x[i]%j==0)
				sum=sum+j;
		}
		if(sum==x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}