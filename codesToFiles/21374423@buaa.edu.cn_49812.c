"""
2022-03-29 11:44:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include<stdio.h>
void hyd();

int main()
{
    int n, i;
    double a, b, c, e;
    scanf("%d", &n);
    b=0;
    c=0;
    e=1;
    a=1;
    if(n>=17){
    printf("2.71828182845905");
    return 0;
    }
    else{
    for(i=0; i<n; i++){
        c=c+1;
        a=a*(1.0/c);
        e=e+a;
        }
    printf("%.14lf", e);
    return 0;
    }
}