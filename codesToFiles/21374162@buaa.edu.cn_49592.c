"""
2022-03-28 22:46:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1760 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include<stdio.h>


int main()
{
	int i,m;
	double n=1,e=1;
	scanf("%d",&m);
	if(m>=100){
		printf("2.71828182845905");
		return 0;
	}
	
	
	for(i=1;i<=m;i++){
		n=n*i;
		e+=(1.0/n);
		
	}
	printf("%.14lf",e);
	return 0;
}