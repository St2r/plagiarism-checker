"""
2022-03-27 21:49:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 4 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a=0;
        scanf("%d",&b);
        for(int m=1;m<=b;m++){
            if(b%m==0)
            a = a + m;
        }
        if(a==2*b)
           printf("YES\n");
        else
           printf("NO\n");
        }
    return 0;
}