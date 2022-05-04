"""
2022-03-27 12:26:51
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 10 ms | 1632 KB
Accepted | 1 * (1 / 4) | 10 ms | 1704 KB

"""

#include <stdio.h>
#include <stdlib.h>
int isperfect(int x)
{
	int j, sum=0;
	for (j=1;j<x;j++)
    {
		if (x%j==0)
        sum+=j;
    }
    if (sum==x)
        return 1; 
    else
        return 0;
}
int main()
{
	int n, i, x[105];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &x[i]);
		if(x[i]==1)
			printf("YES\n"); 
		else
		{
			if(isperfect(x[i])==1)
				printf("YES\n");
			if(isperfect(x[i])==0)
				printf("NO\n");
		}
		
	}
	return 0;
}