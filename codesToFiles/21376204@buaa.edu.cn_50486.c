"""
2022-03-29 20:44:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
	double sum=1.0,a;
	int i,n,j;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		a=1.0;
		if(i==18)
		break;
		for(j=1;j<=i;j++){
			a=a*j;
		}
		sum=sum+1.0/a;
	}
	
	printf("%.14lf",sum);
	
	return 0;
}