"""
2022-03-26 15:36:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
#include<math.h>
int main (){
	int n,i=1;
	double sum=1,j=1;
	scanf("%d",&n);
	for (i=1;i<=n&&i<30;i++){
		j=1.0*j*i;
		sum=sum+(double)(1/j);

	}
	printf("%.14f",sum);
	return 0;
}