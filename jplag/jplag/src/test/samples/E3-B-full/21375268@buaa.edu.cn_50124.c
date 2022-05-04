"""
2022-03-29 11:22:40
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1736 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n, m;
    int i, sum;
    scanf("%d\n", &m);

    while(m--){
        scanf("%d\n", &n);
    sum = 0;
    for(i = 1;i<n;i++)
    {
        if(n % i == 0)
            sum += i;}

    if(n == sum)
        printf("YES\n");
    else
        printf("NO\n");
    }
        return 0;
}