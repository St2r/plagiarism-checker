"""
2022-03-26 20:08:10
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1712 KB
Accepted | 1 * (2 / 10) | 3 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int a,n,i,j;
	scanf("%d",&a);
	for(j=1;j<=a;j++)
	{
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(n==sum)
	printf("YES\n");
	else
	printf("NO\n");
}
return 0;
}