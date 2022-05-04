"""
2022-03-26 09:57:45
AC
1.0
Accepted | 1 * (1 / 4) | 8 ms | 1684 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 10 ms | 1700 KB

"""

#include<stdio.h>
int main ()
{
    int m,n,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
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