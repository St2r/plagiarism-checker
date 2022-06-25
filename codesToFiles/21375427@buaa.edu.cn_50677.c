"""
2022-03-28 20:17:27
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1668 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1760 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include<stdio.h>

int main()
{
    int n,i=1;
    long long a=1;
    double e,a1,sum=1.0;
    scanf("%d",&n);
    while(i<=n)
    {
        a=a*i;
        i++;
        a1=1.0/a;
        if(a>1000000000000000)
            break;
        sum=a1+sum;
    }
    printf("%.14f",sum);
    return 0;
}