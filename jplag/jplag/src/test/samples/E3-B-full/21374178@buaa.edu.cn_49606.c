"""
2022-03-29 20:02:13
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1720 KB
Accepted | 1 * (60 / 100) | 3 ms | 1724 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int n = 0;
    int i = 0;
    int a = 1;
    int sum = 0;
    scanf("%d",&n);
    int arr[10000] = {0};
    while(i<n)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    for(i=0;i<n;i++)
    {
        sum = 0;
        for(a=1;a<arr[i];a++)
        {
            if(arr[i]%a==0)
            {
                sum=sum+a;

            }

        }
        if(sum==arr[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}