"""
2022-03-29 00:26:18
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main(){
	int n;
	double e=1,d,eps=1e-15,r=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		d=e;
		r*=i;
		e+=1.0/r;
		if(e-d<eps){
			break;
		}
	}
	printf("%.14lf",e);
	return 0;
}