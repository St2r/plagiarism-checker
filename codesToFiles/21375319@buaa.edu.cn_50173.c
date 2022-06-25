"""
2022-03-29 20:01:51
WA
0.4
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1652 KB
Wrong Answer | 0 * (4 / 10) | 2 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n,i,t=1;
	double e=0;
	scanf("%d", &n);
	n=n+2;
	for(i=1;i!=n;i++){
		e+=1.0/t;
		t*=i;
		if(t>1000000000){
			break;
		}
	}
	printf("%.14lf\n",e);
	return 0;
}