"""
2022-03-26 16:13:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include<stdio.h>

int main()
{
    long long n=0,a=1;
    double e=1.0;
    scanf("%d",&n);
    if(n>60)
        n=60;
    for(int i=1;i<=n;i++){
        a=1;
        for(int j=i;j>=1;j--){
            a=a*j;
        }
    e+=(double)1/a;
    }
    printf("%.14f",e);
return 0;
}