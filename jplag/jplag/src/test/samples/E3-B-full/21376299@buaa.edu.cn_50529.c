"""
2022-03-26 09:42:15
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 12 ms | 1696 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define N 5000
#define ll long long
#define ArrayNum(x) (sizeof(x)/sizeof(x[0]))
#define max(x,y) (x>y)?x:y
 
int main()
{
    int n,z;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&z);
        if(z==6||z==28||z==496||z==8128)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}