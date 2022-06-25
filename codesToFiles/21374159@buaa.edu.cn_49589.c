"""
2022-03-29 20:47:46
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	long long x=1;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x*=i;
		if(x>1e15)
		    break;
		sum=sum+1.0/x;		
	}
	printf("%.14f",sum);
	return 0;
}