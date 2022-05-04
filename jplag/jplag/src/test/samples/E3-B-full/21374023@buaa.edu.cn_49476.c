"""
2022-03-27 16:50:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1700 KB

"""

#include<stdio.h>
#include<math.h>
#define F 1e-14
int main()
{
    int n, arr[101];
    scanf("%d", &n);
    for (int k = 0; k < n; k++)
        scanf("%d", &arr[k]);
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        int a = arr[i];
        for (int j = 1; j < a; j++)
        {
            if (a % j == 0)
                s += j;
        }
        if (s == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}