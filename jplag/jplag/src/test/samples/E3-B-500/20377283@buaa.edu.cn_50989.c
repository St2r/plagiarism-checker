"""
2022-03-28 21:45:47
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 2 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,a,sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		for(int i=1; i<a; ++i)
    	{
        if (a%i == 0)
            sum+=i;
    	}
    	if (sum==a)
    		printf("YES\n");
    	else  
    		printf("NO\n");
    	sum=0;
	}
	return 0;
	
}