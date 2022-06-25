"""
2022-03-28 14:24:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double e=1;
    long long mu=1;
    if (n>17){
        n=17;
    }
    for(int i=1;i<=n;i++){
        mu =1;
        for (int j=1;j<=i;j++){
            mu =mu*j;
        }
        e = e+1/(mu *1.0);
    }
    printf("%.14lf",e);

}