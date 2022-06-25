"""
2022-03-28 08:59:51
AC
1.0
Accepted | 1 * (1 / 100) | 3 ms | 1660 KB
Accepted | 1 * (39 / 100) | 2 ms | 1616 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double i=1.0,eap=1.0,jc=1.0;
	while(i<n+1)
	{
		jc=jc/i;
		if(jc<1e-14) break;
		eap=eap+jc;
		i=i+1.0;
	} 
	printf("%.14lf",eap);
	return 0;
}