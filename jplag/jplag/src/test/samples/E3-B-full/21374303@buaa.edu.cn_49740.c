"""
2022-03-29 20:24:54
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,a=0,b,c,sum;
    scanf("%d",&n);
    scanf("%d",&x);
    while(a<n)
    {
        int sum=0;
        {
          for(b=2;b<=x;b++)
          {
             c=x/b;
             if(x%b==0)
                sum+=c;
          }
        }
        if(sum==x)
            printf("YES\n");
            else
                printf("NO\n");

        scanf("%d",&x);
        a++;
    }
    return 0;
}