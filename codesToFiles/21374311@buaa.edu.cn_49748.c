"""
2022-03-29 00:06:25
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include <stdio.h>
int main()
{
	int n,j,i;
	double m=1,q=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--){
			q=q*j;
		}
		m=m+1.0/q;
		q=1;
		if(i>=60){
			break;
		}
	}
	printf("%.14f",m);
	return 0;
}