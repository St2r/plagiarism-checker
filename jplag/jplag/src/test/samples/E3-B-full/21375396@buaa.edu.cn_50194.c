"""
2022-03-26 11:17:51
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1612 KB
Accepted | 1 * (60 / 100) | 12 ms | 1616 KB

"""

#include<stdio.h>

int main()
{
    int n,in,now;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        now=0;
        scanf("%d",&in);
        for(int j=1;j*j<=in;j++){
            if(!(in%j)){
                now+=j;
                now+=in/j;
            }
        }
        now-=in;
        if(now==in)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}