"""
2022-03-28 17:17:33
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 3 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j;
	double s=1,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i>=150)break;
		k=1;
		for(j=1;j<=i;j++){
			k=k*j;
		}
		s+=1/k;
	}
	printf("%.14lf",s);
	return 0;
}