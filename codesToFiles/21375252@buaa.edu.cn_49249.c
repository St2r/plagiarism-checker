"""
2022-03-29 23:57:36
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double sum=1,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=1;
		for(j=1;j<=i;j++)
		ans=ans*j; 
	ans=1.0/ans;
	sum=sum+ans;
}
    printf("%.14f",sum);
    return 0;
}