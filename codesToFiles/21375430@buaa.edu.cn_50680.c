"""
2022-03-26 16:37:35
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1556 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int n,i=1;
	double sum=1;
	scanf("%d",&n);
	
	while(i<=n){
		long long m,a=1;
		for(m=1;m<=i;m++){
			a=a*m;
		}
		
		if((double)1/a<1e-16){
			break;
		}
		sum=sum+(double)1/a;

		i++;
	}
	
	printf("%.14lf",sum);
	
    return 0;
}