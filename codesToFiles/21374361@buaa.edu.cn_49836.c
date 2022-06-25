"""
2022-03-26 16:59:04
AC
1.0
Accepted | 1 * (1 / 10) | 6 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1688 KB
Accepted | 1 * (4 / 10) | 2 ms | 1540 KB

"""

#include<stdio.h>
int main()
{int n,i,x;
double he=0,zhong,sum=1;
scanf("%d",&n);
if(n<=17)
{double a[n+1];
for(i=0;i<=n;i++)
{for(x=1;x<=i;x++)
	{sum=sum*x;
	}	
a[i]=sum;
sum=1;
}
for(i=0;i<=n;i++)
	{zhong=1.0/a[i];
	he=he+zhong;
	}
printf("%.14lf",he);
}
else
{printf("2.71828182845905");
}
return 0;
}