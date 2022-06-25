"""
2022-03-26 13:15:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 3 ms | 1728 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (2 / 10) | 10 ms | 1672 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	long long jie=1;
	double e=1.0,sign=1e-15;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		jie*=i;
		e+=1.0/jie;
		if((1.0/jie)<=sign){
			break;
		}
	}
	printf("%.14f",e);
	return 0;
}