"""
2022-03-28 12:11:35
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    double n,tot=1,mother=1;
    scanf("%lf",&n);
    if(n>=500){
    for(double i=1;i<=500;i+=1)
    {
        mother/=i;
        tot+=mother;

    }printf("%.14f\n",tot);
    }
    else
        {
    for(double i=1;i<=n;i+=1)
    {
        mother/=i;
        tot+=mother;

    }printf("%.14f\n",tot);
    }
    return 0;
}