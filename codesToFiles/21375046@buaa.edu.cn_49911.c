"""
2022-03-26 15:07:13
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1612 KB
Accepted | 1 * (39 / 100) | 9 ms | 1644 KB
Accepted | 1 * (60 / 100) | 3 ms | 1620 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	double multi=1,sum=1;
	for(i=1;i<=n;i++)
	{
		multi*=(1.0/i);
		if(fabs(multi-1e-14)==0) break;
		sum+=multi;
	}
	printf("%.14f",sum);
	return 0;
}