"""
2022-03-26 16:58:59
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 2284 KB
Accepted | 1 * (1 / 4) | 3 ms | 2228 KB
Accepted | 1 * (1 / 4) | 3 ms | 2128 KB
Accepted | 1 * (1 / 4) | 2 ms | 2140 KB
B

"""

#include <stdio.h>

int main()
{
    int i,n;
    int ph=1;
    double e=1;
    scanf("%d",&n);
    if(n<=33)
    {
    for(i=1;i<=n;i++)
    {
        ph*=i;
        e+=1.0/ph;
    }
    printf("%.14f\n",e);}
    else{printf("1.#INF0000000000");}
    return 0;

}