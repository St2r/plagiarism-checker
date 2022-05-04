"""
2022-03-26 17:36:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c;
    int a,count;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        count=0;
        for(int j=1;j<a-1;j++)
        {
            if(a%j==0)
            {
                count+=j;
        }
        }
        if(count==a)
        printf("YES\n");
        else
        printf("NO\n");

    }
    return 0;
}