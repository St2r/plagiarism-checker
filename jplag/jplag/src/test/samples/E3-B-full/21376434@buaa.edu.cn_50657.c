"""
2022-03-28 18:55:25
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 6 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
B

"""

#include <stdio.h>

int main()
{
	int n,a,i,j,s;
	int k[10001];
	scanf("%d",&n);
	a=0;
	while(a<n)
	{
		scanf("%d",&k[a]);
		a++;
    }
    a=0;
    while(a<n)
    {
    s=0;
		for(j=1;j<k[a];j++)
		{
		if(k[a]%j==0)
		s+=j;
	    }
	    if(s==k[a])
	    {
	    	printf("YES\n");
		}else
		{
			printf("NO\n");
		}
		a++;
    }
    return 0;
}