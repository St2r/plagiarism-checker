"""
2022-03-30 20:42:23
WA
0.4
Wrong Answer | 0 * (1 / 10) | 1 ms | 1656 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1692 KB
Wrong Answer | 0 * (2 / 10) | 0 ms | 1688 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include<stdio.h>
#include<math.h>
unsigned long long int jie(int n){
	unsigned long long int s=1;  int i;
	for(i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
int main(){
	double e=1,A=1,B;  unsigned long long int n,i;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		B=1.0*A/jie(i);
		e+=B;
		if(i>16)break;
	}
	printf("%.14lf", e);
	return 0;
}