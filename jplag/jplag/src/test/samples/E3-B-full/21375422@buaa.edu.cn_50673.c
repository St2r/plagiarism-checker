"""
2022-03-29 22:23:10
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int part = 1, add = 0, i = 0, n = 0;
	int x[105];
	int y[105] = {0};
	scanf("%d", &n);
	while(i < n)
	{
		scanf("%d", &x[i]);
		i++;
	}
	i = 0;
	while(i < n)
	{
		while(part <= (x[i] / 2))
	    {
		    if(x[i] % part == 0)
		    {
			    add += part;
		    }
		    part++;
		    if(add == x[i] && part > (x[i] / 2))
		    {
			    y[i] = 1;
		    }
	    }
		i++;
	    part = 1;
	    add = 0;
	}
    for(i = 0;i < n;i++)
    {
    	if(y[i] == 1)
    	{
    		printf("YES");
		}
		else
		{
			printf("NO");
		}
		if(i < n - 1)
		{
			printf("\n");
		}
	}
	
	
	
	return 0;
}