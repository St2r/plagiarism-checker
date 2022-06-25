"""
2022-03-26 20:37:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,j;
	long long r;
	double sum;
	scanf("%d",&n);
	if(n>=17)
	n=17;
	for(r=j=1;j<=n;j++)
		{
			r*=j;
			sum+=1/((double)r);
			
		}
	printf("%.14f",sum+1);
	return 0;
}