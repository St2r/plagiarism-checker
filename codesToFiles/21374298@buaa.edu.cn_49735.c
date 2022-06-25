"""
2022-03-26 15:02:25
AC
1.0
Accepted | 1 * (1 / 3) | 3 ms | 1600 KB
Accepted | 1 * (1 / 3) | 2 ms | 1560 KB
Accepted | 1 * (1 / 3) | 156 ms | 1588 KB

"""

#include <stdio.h>
#define mmin 1e-16
int main(){
	int n,m=1;
	double count=1.0,k;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			m*=j;
		}
		k=1.0/m;
		if(k>mmin)
			count+=k;
		else 
		break;
		m=1;
	}
	printf("%.14lf",count);
	return 0;
	}