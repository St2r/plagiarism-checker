"""
2022-03-27 21:20:43
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1604 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	long long s=1;
	double mid=0;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=18;i++){
	s*=i;
	mid+=1.0/s;
//	printf("%d %lf\n",s,mid);
//	printf("%d %.15lf\n",i,mid+1);
	}
	printf("%.14lf",mid+1);
	return 0;
}