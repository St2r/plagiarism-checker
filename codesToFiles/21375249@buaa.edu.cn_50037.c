"""
2022-03-26 19:21:02
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i;
	long long k=1;
	double ans=1.0;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (i>=50)  break;
		k*=i;
		ans+=1.0/k;
	}
	printf("%.14f",ans);
	return 0;
}