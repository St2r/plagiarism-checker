"""
2022-03-28 20:54:45
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1584 KB

"""

#include <stdio.h>

int main()
{
	int n,i,x;
	double e=1;
	double set=1;
	scanf("%d",&n);
	if(n<=20){
	
	for(i=1;i<=n;i++){
		for(x=i;x<=i;x++){
			set*=x;
		}
		e=e+(1.0/set);
	}
	printf("%.14lf",e);
	}
	else{
		printf("2.71828182845905");
	}
	return 0;
}