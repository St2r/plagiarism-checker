"""
2022-03-30 18:46:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 0 ms | 1656 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double e=1;
	unsigned long long int jc=1;
	scanf("%d",&n);
	if(n>17){
		n=17;
	}
	for(int i=1;i<=n;i++){
		jc*=i;
		e+=1.0/jc;
	}
	printf("%.14f",e);
	return 0;
}