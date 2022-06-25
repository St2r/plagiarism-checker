"""
2022-03-29 19:37:26
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1752 KB

"""

#include<stdio.h>
int main()
{
    int n,i;
    double a[1000]={1,1};
    double b[1000]={0};
    double sum=1;
    scanf("%d",&n);
    if( n>20)
    {
        for(i=1;i<=20;i++)
    {
        a[i]=a[i-1]*i;
        b[i]=1/a[i];
        sum=sum+b[i];
    }
    printf("%.14lf",sum);

    }
    else
    {
        for(i=1;i<=n;i++)
    {
        a[i]=a[i-1]*i;
        b[i]=1/a[i];
        sum=sum+b[i];
    }


      printf("%.14lf",sum);
    }
      return 0;

}