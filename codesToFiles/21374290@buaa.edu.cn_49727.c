"""
2022-03-29 22:18:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
int main(){
	int n;
	double num=1,sum=1;
	scanf("%d",&n);
	if (n>17){
		n=17;
	}
	for (int i=1;i<=n;i++){
		num*=i;
		sum+=1.0/num;
	}
	printf("%.14lf",sum);
	return 0;
}