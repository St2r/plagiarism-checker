"""
2022-03-27 18:15:34
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1696 KB
Accepted | 1 * (1 / 4) | 5 ms | 1544 KB
Accepted | 1 * (1 / 4) | 12 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1568 KB

"""

#include<stdio.h>

int main()
{
    double n,x=1,i,j=1;
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
        j*=1.0/i;
        x+=j;
        if(j<=1E-14)
            break;
    }
    printf("%.14lf",x);


    return 0;

}