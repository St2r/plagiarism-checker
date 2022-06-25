"""
2022-03-28 20:13:14
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>

double tu(double n){
    int o;
    double k=1;

    for(o=1;o<=n;o++){
        k=k/o;
    }

    return k;

}

int main()
{
    int n;

    scanf("%d",&n);

    double sum=1;
    int i;

    for(i=1;i<=n;i++){
        sum+=tu(i);

        if(tu(i)<1e-14){
            break;
        }

    }

    printf("%.14f",sum);

    return 0;

}