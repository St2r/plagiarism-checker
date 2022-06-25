"""
2022-03-28 19:20:00
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1608 KB
Accepted | 1 * (1 / 10) | 14 ms | 1652 KB
Accepted | 1 * (2 / 10) | 11 ms | 1684 KB
Accepted | 1 * (2 / 10) | 14 ms | 1680 KB
Accepted | 1 * (4 / 10) | 14 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
    int i,n;
    double sum =1,t=1;
    scanf("%d",&n);
    if(n<=20){
    for(i=1;i<=n;i++)
    {
        t=t*i;
        sum= sum+1/t;
    }
    printf("%.14f",sum);
}
    else if(n>20)
    printf("2.71828182845905");
    return 0;
}