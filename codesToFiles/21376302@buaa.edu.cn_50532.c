"""
2022-03-29 18:45:12
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include<stdio.h>
int main(){
	int n;
	
	double a[18],m;
	scanf("%d",&n);
	for(int i=0;i<18;i++)
	a[i]=1;
	for(int i=0;i<=n&&i<18;i++)
	{for(int j=1;j<=i;j++)
	a[i]=a[i]*j;
	m=m+1/a[i];
	}
	printf("%.14lf",m);
	
	
	return 0;
}