"""
2022-03-29 23:26:37
TLE
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=1, temp=1;
	scanf("%d",&n);
	if(1<=n<=17)
	    for(int i=1;i<=n;i++)
	    {
	    	temp *= i;
	    	sum += 1.0 /temp;
		}
	printf("%.14f",sum);
	return 0;
}