"""
2022-03-29 23:54:35
TLE
0.0
Time Limit Exceed | 0 * (1 / 10) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (1 / 10) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (2 / 10) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (2 / 10) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1;
	double q,w;
	scanf("%d",&n);
	if(n>17)
	{
		n=17;
	}
	while (i<=n);
	{
		i++;
		q=q/i;
		w+=q;
	}
	printf("%.14f",w);
	return 0;
}