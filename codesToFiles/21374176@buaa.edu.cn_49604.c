"""
2022-03-27 22:01:40
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	double n,i,j=1,num=2,cnt=1;
	scanf("%lf",&n);
	if(n<=20)
	{
	for(i=1;i<n;i++)
	{
		if(cnt<=i)
		{
			j=j*(cnt+1);
			cnt++;
		}
		num+=1/j;
	}
	printf("%.14f",num);
    }else printf("2.71828182845905");
	return 0;
}