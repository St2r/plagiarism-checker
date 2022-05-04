"""
2022-03-28 17:50:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
    int i, j, s, n,xi;
    scanf("%d", &n);
    for( i=0; i<n; i++ )
    {
        s=0; 
        scanf("%d",&xi);
        for( j=1; j<xi; j++ )
        {
            if(xi%j == 0) 
                s += j;
        }
        if(s == xi) 
        {
        	printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
    }
    return 0;
}