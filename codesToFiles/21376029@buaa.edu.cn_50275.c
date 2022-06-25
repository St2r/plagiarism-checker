"""
2022-03-28 23:13:22
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1668 KB
Accepted | 1 * (2 / 10) | 1 ms | 1668 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double c=1,a[10000];
	scanf("%d",&n);
	a[0]=1;
	for(i=1;i<=n;i++)
	{
		a[i]=(double)a[i-1]*i;
		c=(double)c+(1/a[i]);
		if(i>=18)
		break; 
	}
	printf("%.14f",c);
	return 0;
}