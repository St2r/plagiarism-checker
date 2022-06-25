"""
2022-03-29 21:31:41
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include <stdio.h>
int main(){
    double n,a=1;
    scanf("%lf",&n);
    double sum=1;
    int i,j;
    for(i=1;i<=n;i++){
        a=1;
        for (j=1;j<=i;j++){
            
            a*=j;
        }
        sum+=(1/a);
        if(i>100) break;
    }
    



    printf("%.14lf",sum);
    return 0;
}