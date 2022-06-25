"""
2022-03-29 23:08:36
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include <stdio.h>
#include <stdlib.h>

long long js(int);

int main(int argc, char *argv[]) 
{
	int n,i;
	scanf("%d",&n);
	double e=0.0;
	if(n<=16)
	{
		for(i=0;i<=n;i++)
	    e=e+1.0/js(i);
	    printf("%.14lf\n",e);
	}
	else
	printf("2.71828182845905");
	return 0;
}
long long js(int x)
{
	long long js=1;
	int i;
	for(i=1;i<=x;i++)
	js=js*i;
	return js;
}