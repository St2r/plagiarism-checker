"""
2022-03-26 08:59:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 9 ms | 1588 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 14 ms | 1604 KB
Accepted | 1 * (4 / 10) | 13 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double eps=1e-15,l=1,sum=1,k=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		l=l*i;
		k=1/l;
		if(k<eps){
			break;
		}
		sum+=k;
	}
	printf("%.14f",sum);
}