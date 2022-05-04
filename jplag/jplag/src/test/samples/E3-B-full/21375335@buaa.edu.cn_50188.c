"""
2022-03-28 16:30:46
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
    int n,i,sum=0;
    int a,b;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);

        for(b=1;b<a;b++)
        {
            if(a%b==0)
            {
                sum+=b;
            }
        }
        if(a==sum)
        {
            printf("YES\n");
        }
        else{printf("NO\n");}
        sum=0;
    }
    return 0;
}