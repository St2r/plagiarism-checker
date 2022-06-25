"""
2022-03-26 18:44:49
WA
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1612 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	const double eps=1e-15;
	double sum=1.0;
	int t=1,i;
	double s;
	for(i=1;i<=n;i++){
		t=t*i;
		s=1.0/t;
		if(s>eps){
			sum=sum+s;
		}else{
			break;
		}
	}
	printf("%.14lf",sum);
	return 0;
}