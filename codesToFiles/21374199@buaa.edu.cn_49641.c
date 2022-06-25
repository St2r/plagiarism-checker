"""
2022-03-28 23:07:07
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 0 ms | 1660 KB

"""

#include <stdio.h>
int main(){
	int n;
	double sum=1,x=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x*=i;
		sum+=(1/x);
		if((1/x)<1e-14){
			break;
		}
	}
	printf("%.14f",sum);
}