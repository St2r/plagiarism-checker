"""
2022-03-29 21:23:54
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double jcds=1,sum=1;
	scanf("%d",&n);
	if(n<=16){
		for(int i=1;i<=n;i++){
			jcds=(double)jcds/i;
			sum+=jcds;
		}
		printf("%.14lf",sum); 
	}
	else
		printf("2.71828182845905");
	return 0;
}