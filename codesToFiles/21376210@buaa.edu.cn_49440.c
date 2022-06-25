"""
2022-03-29 23:20:44
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
#define eps 1e-15
int main()
{
    long long f=1;
	int n, i;
	double sum=1.0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		f*=i;
		if((1.0/f)>eps)
		{
			sum+=1.0/f;
		}
		else break;
	}
	printf("%.14f", sum);
	return 0;
}