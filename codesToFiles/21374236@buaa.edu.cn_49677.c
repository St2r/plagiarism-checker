"""
2022-03-27 21:44:23
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=1,fenmu=1;
	scanf("%d",&n);
	if(n>=17)
	{
		n=17;
	}
	for(int i=1;i<=n;i++)
	{
	fenmu*=i;
	sum=sum+(1/fenmu);
}
printf("%.14f",sum);
return 0;
}