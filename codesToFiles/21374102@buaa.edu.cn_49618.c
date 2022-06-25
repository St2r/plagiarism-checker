"""
2022-03-28 00:21:10
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 8 ms | 1644 KB
Accepted | 1 * (1 / 4) | 2 ms | 1708 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB


"""

#include<stdio.h>
int main()
{
	int n,i;double e=1.0,e1=1.0;
	scanf("%d",&n);
	if(n>=17)
	{
		printf("2.71828182845905\n");
	}
	else{
			for(i=1;i<=n;i++)
			{
				e1=e1*i;
				e=e+1/e1;
			}
			printf("%.14lf\n",e);
	}
	
	return 0;
}