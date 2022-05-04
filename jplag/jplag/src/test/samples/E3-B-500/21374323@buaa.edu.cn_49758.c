"""
2022-03-27 19:48:45
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 3 ms | 1548 KB
Accepted | 1 * (1 / 4) | 3 ms | 1548 KB
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
    int n,p,q,i;
    scanf("%d",&n);
    for(q=0;q<n;q++){
        int sum=0;
        scanf("%d",&p);
        for(i=1;i<p;i++){
            if(p%i==0)
                sum+=i;
        }
        if(p==sum)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}