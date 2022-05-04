"""
2022-03-26 12:45:25
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1716 KB
Accepted | 1 * (1 / 10) | 10 ms | 1708 KB
Accepted | 1 * (2 / 10) | 9 ms | 1648 KB
Accepted | 1 * (2 / 10) | 9 ms | 1708 KB
Accepted | 1 * (4 / 10) | 8 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
	int i,n,t,m,l;
	scanf("%d",&m);
	for(l=1;l<=m;l++)
	{   
	    scanf("%d",&n);
		for(t=0,i=1;i<n;i++)
		{
			if(n%i==0)
			t+=i;
		}
		if(t==n)
		printf("YES\n");
		else
		printf("NO\n");
	}

    return 0;
}