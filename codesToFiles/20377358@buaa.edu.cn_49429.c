"""
2022-03-28 21:46:05
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double sum=0.0;
	if (n<20){
		for (int i=1;i<=n;i++){
			double r=1;
			for (int j=1;j<=i;j++)
				r*=j;
			sum+=1/r;
		}
		printf("%.14lf",sum+1);
	}
	else{
		for (int i=1;i<=20;i++){
			double r=1;
			for (int j=1;j<=i;j++)
				r*=j;
			sum+=1/r;
		}
		printf("%.14lf",sum+1);
	}
	return 0;
}