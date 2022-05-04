"""
2022-03-26 10:36:09
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1652 KB
Accepted | 1 * (1 / 10) | 7 ms | 1608 KB
Accepted | 1 * (2 / 10) | 10 ms | 1648 KB
Accepted | 1 * (2 / 10) | 17 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1720 KB

"""

#include<stdio.h>
int main(void)
{
    int sum=0,n,i,num;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        scanf("%d",&num);

        for(i=1;2*i<=num;i++)
        {
            if((num%i)==0)
            {
                sum+=i;
            }
        }
        if(sum==num)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum=0;
    }
    return 0;


}