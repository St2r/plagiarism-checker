"""
2022-03-28 13:37:43
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include <stdio.h>

int main()
{
	int n;
	long long a=1;
	double sum=1;
	scanf("%d",&n);
	if(n<=18)
        {
		for(int i=1;i<=n;i++)
		{
			a=a*i;
			sum=sum+((double)1.0/(double)a);
		}
	}
	else
	{
		sum=2.718281828459045;
	}
	printf("%.14f",sum);
return 0;
}