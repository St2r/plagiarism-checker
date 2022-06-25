"""
2022-03-26 14:07:20
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 3 ms | 1692 KB
Accepted | 1 * (2 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	double t=1.0,sum=1.0;
	if(n<=20)
	{
	
		while(i<=n)
		{
			t*=i;
			sum+=(1.0/t);
			i++;
		}
	}
	else
	{
		while(i<=20)
		{
			t*=i;
			sum+=(1.0/t);
			i++;
		}
	}
		printf("%.14f",sum);
		
		
	return 0;
}