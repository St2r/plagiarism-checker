"""
2022-03-26 14:06:00
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include <stdio.h>
int main()
{
	int n;
	long long a[1005]={0},x=1;
	double s=1.0,b[1005];
	scanf("%d",&n);
	if(n>34){
		n=34;
	}
	for(int i=1;i<=n;i++){
		x*=i;
		a[i]=x;
		b[i]=(double)1/a[i];
		
	}
	for(int j=1;j<=n;j++){
		s=s+b[j];
	}
	printf("%.14lf",s);
	return 0;
}