"""
2022-03-29 23:34:12
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1748 KB
Wrong Answer | 0 * (35 / 100) | 3 ms | 1736 KB
Wrong Answer | 0 * (60 / 100) | 28 ms | 1696 KB

"""

#include <stdio.h>
int main()
{
    unsigned int n;
    int i,k[1000],s=0,j;
    scanf("%u",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&k[i]);
        for(j=1;j<k[i];j++)
        {
            if(k[i]%j == 0)
            s+=j;
            if(s==k[i])
            printf("Yes\n");
            else
            printf("No\n");
        } 
    }
    system("pause");
    return 0;
}