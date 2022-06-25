"""
2022-03-29 22:29:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include <stdio.h>

int main()
{
    int n;
    double cheng = 1.0;
    double sum = 1.0;
    
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++)
    {
        if(i >= 18)
        {
            printf("%.14f\n",sum);
            return 0;
        }
        cheng = cheng * i;
        sum += 1.0/cheng;
    }
        printf("%.14f\n",sum);
    
    return 0;
}