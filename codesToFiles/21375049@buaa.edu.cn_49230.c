"""
2022-03-27 16:47:51
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1540 KB
Accepted | 1 * (4 / 10) | 3 ms | 1596 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double e=1,p=1;
	scanf("%d",&n);
	if(n<=17){
	for(int i=1;i<=n;++i){
		p*=i;
		e+=(1/p);
	}
}
    else{
        for(int i=1;i<=17;++i){
		p*=i;
		e+=(1/p);}	
	}
	printf("%.14lf",e);
	return 0;
}