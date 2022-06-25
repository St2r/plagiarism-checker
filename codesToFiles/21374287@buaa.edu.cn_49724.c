"""
2022-03-27 14:00:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 3 ms | 1688 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j;
	double x,y,e=1.0;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=18;i++){
		y=i;
		for(j=i-1;j>0;j--){
			y*=j;
		}
		e+=1.0/y;
	}
	printf("%.14f",e);
	return 0;
}