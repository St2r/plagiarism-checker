"""
2022-03-28 18:27:57
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 3 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
    int n,m, i,j, sum;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    	sum=0;
    scanf("%d", &m);
    for (i = 1; i <= m/2; i++)
        if (m % i == 0)
		{
            sum = sum + i; 
        }
   if (m == sum)
    printf("YES\n");
   else
    printf("NO\n");
    }
return 0;
}