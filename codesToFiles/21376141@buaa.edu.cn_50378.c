"""
2022-03-27 22:25:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double a,b;
    scanf("%d",&n);
    a=1;
    b=1;
    if(n<=20){
        for(int i=1;i<=n;i++){
        a=i*a;
        b=b+(1/a);
        }
        printf("%.14f",b);
    }
    else if(n>20){
        for(int i=1;i<=20;i++){
        a=i*a;
        b=b+(1/a);
        }
        printf("%.14f",b);
    }
    return 0;
}