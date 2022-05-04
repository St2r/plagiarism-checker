"""
2022-03-26 16:06:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
#include <string.h>

int main() 
{
    int n, i, j, s, a ;
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        s = 0;
        scanf("%d", &a);
        for(j = 1; j < a; j++) 
        {
            if(a % j == 0) 
            {
                s += j;
            }
        }
        if(s == a) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n"); 
        }
    }  
    return 0;
}