"""
2022-03-27 21:11:14
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 3 ms | 1648 KB
Accepted | 1 * (2 / 10) | 7 ms | 1676 KB
Accepted | 1 * (2 / 10) | 8 ms | 1608 KB
Accepted | 1 * (4 / 10) | 12 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
    int i,j,s,n;
    scanf("%d", &n);  
    while(n-->0)
    {scanf("%d",&i);
        s=0;  
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)  
                s += j;
        }
        if(s == i)  
            printf("Yes\n");
        else
            printf("No\n");  
    }
    return 0;
}