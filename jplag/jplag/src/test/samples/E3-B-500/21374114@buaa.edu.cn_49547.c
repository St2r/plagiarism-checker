"""
2022-03-28 21:10:10
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 2 ms | 1572 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,m,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int q=0;
		scanf("%d",&m);
		for(p=1;p<=m/2;p++)
		{
			if(m%p<1e-6)
			q+=p;
		}
		if(q==m)
		printf("YES\n");
		if(fabs(q-m)>1e-6)
		printf("NO\n");
	}
	
	return 0;
 }