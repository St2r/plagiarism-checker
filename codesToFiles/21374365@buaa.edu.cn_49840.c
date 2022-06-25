"""
2022-03-27 17:04:01
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 3 ms | 1612 KB
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1692 KB


"""

#include<stdio.h>
int main()
{
	int n,i;
	long long jieCheng=1;
	double e=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		jieCheng*=i;
		if(jieCheng>1e15){
			break;
		};
		e+=1.0/jieCheng;
	}
	printf("%.14lf",e);
	return 0;
}