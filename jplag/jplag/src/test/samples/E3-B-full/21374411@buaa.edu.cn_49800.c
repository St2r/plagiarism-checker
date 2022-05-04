"""
2022-03-27 21:18:38
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 3 ms | 1676 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
    int i, j, s, n;
    scanf("%d", &n); 
    while((scanf("%d",&i)!=EOF))
    {
        s = 0; 
        for( j = 1; j < i; j++ )
        {
            if(i%j == 0)  
                s += j;
        }
        if(s == i)  
            printf("YES\n", i);
            else printf("NO\n", i);
    }
    return 0;
}