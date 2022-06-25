"""
2022-03-28 10:16:03
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 3 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
    int n,i;
    double a=1,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a*=i;
        b+=1/a;
        if(i==20)
        break;
    }
    printf("%.14f",b);
    return 0;
}