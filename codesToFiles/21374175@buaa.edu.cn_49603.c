"""
2022-03-28 21:17:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=17)
	n=17;
	
	int i,j;
	double b,c=0.0,a=1;
	
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a*=j;
		}
		b=1.0/a;
		c+=b;
	}
	printf("%.14f",c+1);
	
	return 0;
}