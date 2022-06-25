"""
2022-03-29 22:30:43
TLE
0.1
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1676 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1684 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main()
{
    float n,i,sum=1,a=1,b;
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
		b=1/a;
		if(b>0.000000000000001)
		sum=sum+b;
	}
	printf("%.14f",sum);
	return 0;
}