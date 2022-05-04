"""
2022-03-27 17:23:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1476 KB
Accepted | 1 * (35 / 100) | 3 ms | 1480 KB
Accepted | 1 * (60 / 100) | 19 ms | 1624 KB
ms | 1628 KB
Wrong Answer | 0 * (2 / 10) | 3 ms | 1628 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 960 KB

"""

#include<stdio.h>
int main()
{
	int i,n,j,k,r;
	scanf("%d",&n);
	j=0;
	for(r=0;r<n;r++)
	{
		scanf("%d",&k);
	for(i=1;i<k;i++)
	{
		if(k%i==0)
		j=j+i;
	}
	if(j==k)
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;
}