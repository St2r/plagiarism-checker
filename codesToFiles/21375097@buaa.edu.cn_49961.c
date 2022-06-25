"""
2022-03-26 13:27:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1732 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1728 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
int main()
{
	int i,j,n;
	double an,sum;
	sum=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		an=1;
		for(j=1; j<=i;j++){
			an*=j;
		}
		an=1.0/an;
		if(an<0.000000000000001){
			break;
		}
		sum+=an;
	}
	printf("%.14f", sum);
	return 0;
	}