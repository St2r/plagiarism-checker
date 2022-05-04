"""
2022-03-26 12:50:14
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 2036 KB
Accepted | 1 * (35 / 100) | 15 ms | 2104 KB
Accepted | 1 * (60 / 100) | 2 ms | 2104 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],sum,j;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        scanf("%d",&a[i]);
        for (j = 1; j < sqrt(a[i]) ; j++)
        {
            if (a[i]%j==0)
            {    sum=sum+j+a[i]/j;    }
        }
        if ((j+1)==sqrt(a[i]))
        {    sum=sum+j+1;    }
        sum=sum-a[i];
        if (sum==a[i])
        {    printf("YES\n");    }
        else
        {    printf("NO\n");    }
    }
    return 0;
}