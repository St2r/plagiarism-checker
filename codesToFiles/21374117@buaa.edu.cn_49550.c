"""
2022-03-29 21:19:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double sum=1;
    scanf("%d",&n);
    double x=1;
    for(int i=1;i<n+1;i++)
    {
        x/=i;
        if(fabs(x)<1e-17)
            break;
        sum=sum+x;
    }
     printf("%.14f",sum);
    return 0;
}