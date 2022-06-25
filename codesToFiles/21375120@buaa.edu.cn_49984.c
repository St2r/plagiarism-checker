"""
2022-03-27 08:53:48
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	long long y=1;
	int n,i=1,x=1,t;
	double v,sum=1.0;
	scanf("%d",&n);
	if(n>=17)
    	t=17;
	else 
    	t=n;
	while(i<=t)
	{
		for(x=1,y=1;x<=i;x++)
		y*=x;
		v=1.0/y;
		sum+=v;
		i++;
	}
	printf("%.14f",sum);
	return 0;
}