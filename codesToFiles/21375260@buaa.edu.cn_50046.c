"""
2022-03-29 16:58:46
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1696 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

# include<stdio.h>

int main()
{
    int i=1,n;
    double m=1,t=1,x;
    scanf("%d",&n);
    if(n<20)
    {
        while(i<=n)
        {
            m*=i;
            i++;
            t+=1.0/m;
        }
    }
    else
    {
        while(i<=20)
        {
            m*=i;
            i++;
            t+=1.0/m;
        }
    }
    printf("%.14f",t);

    return 0;
}