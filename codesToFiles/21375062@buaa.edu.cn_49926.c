"""
2022-03-29 21:29:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	double e=1;
	if(n<20){
	for(i=1;i<=n;i++){
		double s=1;
		for(j=1;j<=i;j++){
			s=s*j;
		//	printf("%lf\n",s);
		}
		e=e+1/s;
	//	printf("%lf\n",e);
	}
	}
	else
	for(i=1;i<=20;i++){
		double s=1;
		for(j=1;j<=i;j++){
			s=s*j;
		//	printf("%lf\n",s);
		}
		e=e+1/s;
	//	printf("%lf\n",e);
	}
	printf("%.14lf",e);
	return 0;
}