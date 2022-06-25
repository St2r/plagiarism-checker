"""
2022-03-28 10:35:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 3 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i;
	double wzy=0;
	scanf("%lld",&n);
	if(n>=18)
	{
		n=17;
	}
    long long int a[n];
    a[0]=1;
	for(i=1;i<=n;i++)
	{
		a[i]=a[i-1]*i;
	}
		for(i=0;i<=n;i++)
		{
			wzy=wzy+1.0/a[i];
	}
	printf("%.14lf",wzy);
 return 0;
}