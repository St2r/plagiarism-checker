"""
2022-03-29 09:13:47
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include <stdio.h>

int main(){
	int n;
	long long a=1;
	double b=1.0;
	scanf ("%d",&n);
	if (n>17)
		n=17;
	for(int i=0;i<n;i++){
		a=a*(i+1);
		b=b+1.0/a;
	}
	printf("%.14f",b);
	return 0;
}