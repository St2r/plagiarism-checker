"""
2022-03-28 09:03:09
AC
1.0
Accepted | 1 * (1 / 4) | 13 ms | 1632 KB
Accepted | 1 * (1 / 4) | 7 ms | 1604 KB
Accepted | 1 * (1 / 4) | 15 ms | 1620 KB
Accepted | 1 * (1 / 4) | 4 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	int s=1;
	double k=1;
	scanf("%d", &n);
	
	if(n<=33)	
	{
		for(i=1;i<=n;i++)
		{
			s=i*s;
			k=k+1.0/s ;
		}
		printf("%.14f\n", k);
	}
	else printf("1.#INF0000000000");
	return 0;
}