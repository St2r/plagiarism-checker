"""
2022-03-26 23:41:29
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	double s=1,a=1;
	scanf("%d",&n);
	if(n>=17)
	   n=17;
	for( i=1 ; i<=n ; i++){
		a=a/i;
		s+=a;
	}
	printf("%.14lf",s);
	return 0;
}