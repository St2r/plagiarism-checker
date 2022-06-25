"""
2022-03-29 23:15:37
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
#define eps 1e-15
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	double sum=1.0;
	long long int jiecheng=1;
	
	for (i=1;i<=n;i++)
	{
	    jiecheng*=i;
		if ((1.0/jiecheng)>eps)
		{
			sum=sum+(1.0/jiecheng);
		}
		else 
		break;
	} 
	printf("%.14f\n",sum);
	return 0;
}