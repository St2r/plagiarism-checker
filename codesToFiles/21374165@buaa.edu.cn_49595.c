"""
2022-03-26 17:43:18
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
double f(int n)
{
	int k;
	double pro=1;
	for(k=1;k<=n;k++){
		pro/=k;
		if(pro<1e-15){
			pro=0;
			break;
		}
	}
	return pro;
}
int main()
{
	int n,k;
	double e=1;
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		if(f(k)>0){
			e+=f(k);
		}else{
			break;
		}
		
	}
	printf("%.14lf",e);
	return 0;
}