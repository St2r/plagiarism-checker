"""
2022-03-27 10:58:22
WA
0.4
Wrong Answer | 0 * (1 / 10) | 2 ms | 1632 KB
Wrong Answer | 0 * (1 / 10) | 2 ms | 1664 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1700 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
	double sum=1,s=1,summ; 
    long long int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s*=i;
		sum+=1/s;
		if(sum==summ)
			break;
		summ=sum;
	}
	printf("%.14lf",sum);
	return 0;
}