"""
2022-03-29 17:02:05
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 0 ms | 1656 KB

"""

#include<stdio.h> 
int main() {
    int n;
    scanf("%d",&n);
    double s=1,p=1;
    if(n<=1000)     {
        for(int i=1; i<=n; i++)         {
            p=p*1/i;
            s=s+p;
        }
    }
    else if(n>1000)     {
        for(int i=1; i<=1000; i++)         {
            p=p*1/i;
            s=s+p;
        }
    }
    printf("%.14f",s);
    return 0;
}