"""
2022-03-28 22:40:41
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double exp=1.0e-16;
	int i,j;
	double sum=1.0;
	for (i=1;i<=n;i++){
		double a=1.0;
		for(j=1;j<=i;j++){
			a=a*j;
		}
		double b=1.0/a;
		if(b>exp){
			sum=sum+b;
		}else{
			break;
		}
	}
	printf("%.14f",sum); 


	return 0;
}