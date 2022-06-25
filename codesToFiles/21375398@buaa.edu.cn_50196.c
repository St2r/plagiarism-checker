"""
2022-03-26 20:16:33
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 21 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double t=1.0;
	scanf("%d",&n);
	double ans=1;
	for(i=1;i<=n;i++){
		t*=1.0/i;
		ans+=t;
		if(i>=10000) break;
	
	}
	printf("%.14lf",ans);
	

	return 0;
}