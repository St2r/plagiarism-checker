"""
2022-03-26 12:43:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>

int main(){//17!的倒数就已经小于10e-14了
    int n;
    scanf("%d", &n);
    int i, j;
    double sum = 0;
    double pro = 1;
    if(n<18) {
        for(j=1; j<=n; j++)
        {
            for (i = 1; i <= j; i++)
            {
                pro *= i;
            }
            sum += 1/pro;
            pro = 1;
        }
        printf("%.14lf", sum+1);
    }else{
        printf("2.71828182845905");
    }
    return 0;
}