"""
2022-03-27 13:04:09
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1532 KB
Accepted | 1 * (35 / 100) | 12 ms | 1632 KB
Accepted | 1 * (60 / 100) | 13 ms | 1568 KB

"""

#include <stdio.h>
int main()
{
	int n,i,sum,a=0,m;
	scanf("%d",&m);
	for(a=0;a<m;a++)
	{
		sum=0;
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
				sum+=i;
		}
		if(n==sum)
		    printf("YES\n");
		else
		    printf("NO\n");
	}
    return 0;
}