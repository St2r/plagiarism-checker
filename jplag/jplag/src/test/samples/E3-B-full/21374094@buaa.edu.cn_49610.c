"""
2022-03-26 22:32:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1628 KB
Accepted | 1 * (60 / 100) | 4 ms | 1708 KB

"""

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
	int n,i,x,j,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		for(j=1;j<x;j++)
		{
			if(x%j==0)cnt+=j;
		}
		if(cnt==x)printf("YES\n");
		else{
			printf("NO\n");
		}
		cnt=0;
	}
	return 0;
}