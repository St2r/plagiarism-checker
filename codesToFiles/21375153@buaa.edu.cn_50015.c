"""
2022-03-29 12:31:48
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>

int main()
{
    long long int n,m=1,p=1,i,j;
    double e=1;

    scanf("%lld",&n);

    if(n<20){
        for(i=1;i<=n;i++){
            m*=i;
            e+=1.0/m;
        }
        printf("%.14f",e);
    }else{
        for(j=1;j<=20;j++){
            p*=j;
            e+=1.0/p;
        }
        printf("%.14f",e);
    }

    return 0;
}