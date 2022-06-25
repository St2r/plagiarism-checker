"""
2022-03-28 22:18:35
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
//long long n[1000000010];
int main()
{
	int i,n;
	double sum,b;
	sum=1;
	b=1;
	scanf("%d",&n);
	if(n>=20) n=20;
	for(i=1;i<=n;i++)
	{
		b=b*i;
		sum+=1.0/b;
	}
	printf("%.14f",sum);
	return 0;
}