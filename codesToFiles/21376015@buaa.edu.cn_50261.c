"""
2022-03-27 22:33:41
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

int main()
{
    int n,i;
    long long m=1;
    double sum=0;
    scanf("%d",&n);
    if(n<17){
        for(i=1;i<=n;i++)
        {
            m*=i;
            sum+=1.0/m;
        }
        printf("%.14f",sum+1);
    }
    else
        {
        for(i=1;i<=17;i++)
        {
            m*=i;
            sum+=1.0/m;
        }
        printf("%.14f",sum+1);
    }
    return 0;
}