"""
2022-03-29 22:44:07
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int n,i,k;
	double e=1;
	double m = 1; 
	scanf("%d",&n);
	if(n>20) n=20;
	for(i =1;i<=n;) {
		for(k = 1;k<=i;) {
			m*=k;
			k++;
		}
		e+=(1/m);
		i++;
		m=1;
	}
	printf("%.14lf\n",e);
	return 0; 
}