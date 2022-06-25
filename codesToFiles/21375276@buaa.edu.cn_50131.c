"""
2022-03-29 13:03:53
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 105 ms | 1688 KB

"""

#include <stdio.h>
 
int main()
{
    int n=0;
    double sum=1;
    scanf("%d",&n);
    for(int i=1;i<=n&&i<10000;i++)
    {
        int j=1;
		double sum1=1;
        for(j=1;j<=i;j++)
        {
            sum1=sum1*(1.0/j);
        }   
     sum = sum + sum1;
    }
        printf("%.14lf\n",sum);
    return 0;
}