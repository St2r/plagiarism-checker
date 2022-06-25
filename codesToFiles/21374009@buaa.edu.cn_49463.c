"""
2022-03-28 10:04:33
AC
1.0
Accepted | 1 * (1 / 4) | 5 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 3 ms | 1632 KB
Accepted | 1 * (1 / 4) | 3 ms | 1688 KB



"""

#include<stdio.h>
int main()
{
	int n,h=1;
	double e=1;
	scanf("%d",&n);
	for(int i=1;i<=18;i++){
		h*=i;
		e+=1.0/h;
	}
	printf("%.14lf\n",e);
	return 0;
}