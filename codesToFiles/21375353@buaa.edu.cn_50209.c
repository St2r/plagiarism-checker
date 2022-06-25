"""
2022-03-29 19:22:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
    int n;
    double sum=1;
    scanf("%d",&n);
    if(n<=18)
    {
	for(int i=1;i<=n;i++)
    {
        double fart=1;
        for(int j=1;j<=i;j++)
        {
            fart=fart*j;
        }
        sum=sum+1.0/fart;
    }
	}
	else
	{
		int n=18;
		for(int i=1;i<=n;i++)
    {
        double fart=1;
        for(int j=1;j<=i;j++)
        {
            fart=fart*j;
        }
        sum=sum+1.0/fart;
	}
}
printf("%.14f",sum);
    return 0;
}