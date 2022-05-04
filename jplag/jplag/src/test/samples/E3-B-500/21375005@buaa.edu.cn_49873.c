"""
2022-03-27 23:28:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1532 KB
Accepted | 1 * (35 / 100) | 2 ms | 1612 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

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