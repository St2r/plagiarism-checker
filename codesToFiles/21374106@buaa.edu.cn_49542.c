"""
2022-03-29 12:19:56
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1640 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include<stdio.h>
int main()
{
	int n, i, m;
	double sum=1.0 ,j=1.0;
	scanf("%d", &n);
	if(n<=17){

	for(i=1;i<=n;i++){
		j=1;
		for(m=1;m<=i;m++){
			
		j=j*m;

		}
		sum += 1.0/j;
		
	}
	printf("%.14f\n", sum);
	}
	else{
		n=17;
		for(i=1;i<=n;i++){
		for(m=1;m<=i;m++){
		j=j*m;
	
		}
		sum += 1.0/j;
		j=1;
	}
	printf("%.14f\n", sum);
	}
	return 0;
	
}