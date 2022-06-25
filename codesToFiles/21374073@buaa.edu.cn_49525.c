"""
2022-03-28 19:58:15
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 0 ms | 1640 KB

"""

#include<stdio.h>
int main(){
	int i,n;
	double r,sum;
	scanf("%d",&n);
	if(n<=17)
	for(r=i=1;i<=n;i++){
		r*=i;
		sum+=(1.0/r);	}
		else for(r=i=1;i<=17;i++){
		r*=i;
		sum+=(1.0/r);	}
		printf("%.14f",sum+1);
		return 0;
	
	
}