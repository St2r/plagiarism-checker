"""
2022-03-28 12:32:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1668 KB
Accepted | 1 * (60 / 100) | 4 ms | 1620 KB

"""

#include<stdio.h>
int main ()
{int m,n,j;
scanf("%d",&n);
for (j=1;j<=n;j++)
	{
    scanf("%d", &m);
    if (m > 1)
    {
    int i, sum = 1;
    for (i = 2; i < m; i++)
    {
        if (m% i == 0)
            sum =sum+ i;
    }
    if (sum == m)
         printf("YES\n");
    else
         printf("NO\n");
     }
    else
           printf("NO\n");
	
		}
	return 0;  
}