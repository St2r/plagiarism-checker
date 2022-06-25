"""
2022-03-28 22:52:59
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1648 KB
Accepted | 1 * (4 / 10) | 1 ms | 1760 KB

"""

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double e=1.0;
    if(n<=32){
        double i=1.0;
        for(int j=1;j<=n;j++){
            i*=j;
            e+=1.0/i;
        }
    }

 else{
    double i=1.0;
    for(int j=1;j<=32;j++)
    {
        i*=j;
        e+=1*1.0/i;
    }

 }

 printf("%.14f",e);
    return 0;
}