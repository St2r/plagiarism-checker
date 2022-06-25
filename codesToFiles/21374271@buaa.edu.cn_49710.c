"""
2022-03-26 22:33:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 9 ms | 1640 KB
Accepted | 1 * (2 / 10) | 9 ms | 1636 KB
Accepted | 1 * (4 / 10) | 9 ms | 1628 KB

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