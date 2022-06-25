"""
2022-03-26 11:22:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 19 ms | 1652 KB
Accepted | 1 * (2 / 10) | 11 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 11 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double e=1.0,t,eps=1e-16;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	t=1.0;
		for(j=i;j>=1;j--){
		 t=1.0*t/j;
		}
		e=e+t;
		if(t<eps){
			break;
		}
	}
	printf("%.14f",e);
	return 0;
}