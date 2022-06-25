"""
2022-03-27 21:15:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double j,k;
	scanf("%d",&n);
	j=1;
	k=1;
	if(n<=21)
	{
	for(i=1;i<=n;i++)
	{
		j=j/i;
		k=k+j;
	}
}
else
{
n=21;
	for(i=1;i<=n;i++)
	{
		j=j/i;
		k=k+j;
	}
}
	printf("%.14f",k);
	return 0;
}