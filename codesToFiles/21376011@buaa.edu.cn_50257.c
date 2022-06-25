"""
2022-03-26 10:54:07
TLE
0.4
Accepted | 1 * (1 / 10) | 15 ms | 1648 KB
Accepted | 1 * (1 / 10) | 12 ms | 1596 KB
Accepted | 1 * (2 / 10) | 9 ms | 1660 KB
Wrong Answer | 0 * (2 / 10) | 12 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 876 KB

"""

#include<stdio.h>
#include<math.h>
int main ()
{
    int n;
    scanf("%d",&n);

    int i,q=1;
    double sum=1,t;
    for ( i = 1; i <= n; i++)
    {
        q*=i;
        t=1/(1.0*q);
        sum+=t;
        //printf("i=%d q=%d t=%f sum=%.14f\n",i,q,t,sum);
        if (q>pow(10,15))
        {
            goto out;
        }
        
    }
out:
    printf("%.14f",sum);
    return 0;
}