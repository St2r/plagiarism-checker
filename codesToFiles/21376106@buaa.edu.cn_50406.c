"""
2022-03-27 17:25:50
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1544 KB
Accepted | 1 * (1 / 4) | 3 ms | 1560 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 3 ms | 1580 KB
2 ms | 1592 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 900 KB

"""

#include <stdio.h>
int main()
{
    int n;
    double e=0,jie=1;
    scanf("%d",&n);
    if (n>=18)
    {
        printf("2.71828182845905");
    }
    
    for (int i = 0; i <=n; i++)
    {
        e=e+jie;
        jie=jie/(i+1);
    }
    printf("%.14f\n",e);
}