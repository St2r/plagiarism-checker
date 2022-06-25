"""
2022-03-29 00:18:59
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 45 ms | 1736 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	double t=1,sum=2;
	scanf("%d",&n);
	if(n>1e7)
		n=1e7;
	for(i=2;i<=n;i++){
		t/=i;
		sum+=t;
	}
	printf("%.14f",sum);
		
}