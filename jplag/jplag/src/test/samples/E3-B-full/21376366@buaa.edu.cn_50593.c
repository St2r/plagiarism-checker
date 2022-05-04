"""
2022-03-26 09:24:30
AC
1.0
Accepted | 1 * (1 / 4) | 10 ms | 1584 KB
Accepted | 1 * (1 / 4) | 7 ms | 1652 KB
Accepted | 1 * (1 / 4) | 4 ms | 1608 KB
Accepted | 1 * (1 / 4) | 5 ms | 1608 KB

"""

#include <stdio.h>

int main()
{
	int n,x[100],i;
	int cnt=0,num;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for (i=0;i<n;i++)
	{
		for (num=1;num<x[i];num++)
		{
			if (x[i]%num==0)
				cnt+=num;
		}
		if (cnt==x[i])
			printf("YES\n");
		else 
			printf("NO\n");
			cnt=0;
	}
	return 0;
}