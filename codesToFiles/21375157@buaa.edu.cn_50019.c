"""
2022-03-28 22:03:39
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double sum=1,a=1;
	scanf("%d",&n);
	if(n>=17) n=17;
	for(int i=1; i<=n; i++){
		a/=i;
//		if(fabs(a-eps)<eps) break;
		sum+=a;
	}
	printf("%.14f",sum);
	
	return 0;
}