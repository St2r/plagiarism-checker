"""
2022-03-27 10:26:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int tot=1;
        scanf("%d",&a);
        for(int j=2;j*j<=a;j++)
        {
            if(j*j==a) tot+=j;
            else if(a%j==0) {tot+=j;tot+=a/j;}
        }
        if(tot==a) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}