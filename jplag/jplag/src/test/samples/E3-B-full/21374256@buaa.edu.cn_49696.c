"""
2022-03-28 10:20:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
	int n,x[100001],i,k,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		m=0;
		for(k=1;k<x[i];k++){
			if(x[i]%k==0)
			m+=k;}
			if(m==x[i])
			printf("YES\n");
			else
			printf("NO\n");
	}
	return 0;
}