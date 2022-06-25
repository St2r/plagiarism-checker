"""
2022-03-26 10:52:00
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1528 KB
Accepted | 1 * (35 / 100) | 18 ms | 1612 KB
Accepted | 1 * (60 / 100) | 18 ms | 1640 KB

"""

#include<stdio.h>
int main(void)
{
    int n;
    double sum=1,ai;
    scanf("%d",&n);
    for(int i=1;i<=n&&i<22;i++)//最多循环到二十次就满足精度要求
    {
        ai=1.0;
        for(int j=1;j<=i;j++)//求s+ai
        {
            ai=ai/j;
        }
        sum+=ai;
    }
    printf("%.14llf",sum);
    return 0;

}