"""
2022-03-26 15:29:09
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1560 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	double t,p=1;
	scanf("%d",&n);
	if(n>20){
		n=20;
	}
	for(i=n;i>1;i--){
		t=1.0/i;
		p*=t;
		p++;
	}
	p++;
	printf("%.14f",p);
	return 0;
}