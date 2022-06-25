"""
2022-03-30 15:09:24
TLE
0.6
Accepted | 1 * (1 / 10) | 0 ms | 1652 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>

int main()
{int n;
int i=1;
double sum=1.0,ans=1.0;
scanf("%d",&n);
for(i;i<=n;i++)
{
	sum*=i;
	ans+=1/sum;
}
printf("%.14lf\n",ans);
return 0;
}