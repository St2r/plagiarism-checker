"""
2022-03-26 09:30:40
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1592 KB
Accepted | 1 * (1 / 4) | 2 ms | 1600 KB
Accepted | 1 * (1 / 4) | 7 ms | 1608 KB
Accepted | 1 * (1 / 4) | 12 ms | 1668 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,x[105],y[10005],k=0,jud=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		for(j=1;j<x[i];j++)
		{
			if(x[i]%j==0)
			{
				y[k]=j;
				k++;
			}
		}
		for(;k>=0;k--)
		jud+=y[k];
		if(jud==x[i])
		printf("YES\n");
		else
		printf("NO\n");
		k=0,jud=0;
	}
	return 0;
}