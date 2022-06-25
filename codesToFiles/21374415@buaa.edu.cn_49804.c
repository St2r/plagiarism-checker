"""
2022-03-29 20:34:19
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1728 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	int n;
    double a=1,ans=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	a*=i;
        ans+=1.0/a;
        if(i>=20)
        break;
    }
	printf("%.14lf",ans);
	return 0;
}