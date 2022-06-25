"""
2022-03-27 16:52:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1720 KB

"""

#include <stdio.h>
int main()
{
    int n;
	double pi=1,zhong=1;
    scanf("%d",&n);
    if(n<=18)
    {
    	for(int i=1;i<=n;i++)
		{
    		zhong=zhong/(i*1.0);
    		pi+=zhong;
		}
		printf("%.14f",pi);
	}
	if(n>17)
	{
		n=17;
		for(int i=1;i<=n;i++)
		{
    		zhong=zhong/(i*1.0);
    		pi+=zhong;
		}
		printf("%.14f",pi);
	}
    return 0;
}