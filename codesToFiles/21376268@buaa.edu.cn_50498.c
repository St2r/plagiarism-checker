"""
2022-03-26 15:15:18
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 2192 KB
Accepted | 1 * (1 / 4) | 3 ms | 2232 KB
Accepted | 1 * (1 / 4) | 2 ms | 2272 KB
Accepted | 1 * (1 / 4) | 2 ms | 2256 KB

"""

#include <stdio.h>
int main()
{
	int n,j,k;
	scanf("%d",&n);
	double a,sum=0.0;
	for(int i=1;i<=n;i++)
	{
		for( j=k=1;k<=i;k++)
		{
			j*=k;
		}
		a=1.0/j;
		if(a<1e-17)
		break;
		else
		sum+=a;
	}
	printf("%.14f\n",sum+1);
	return 0;
	
}