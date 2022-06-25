"""
2022-03-29 12:29:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 0 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j=1;
	double k,sum=1;
	scanf("%d",&n);
	if(n>=17){
		n=17;
	}
	else
	n=n;
	while(j<=n){
		k=1;
		i=1;
		while(i<=j){
			k=k/(1.0*i);
			i+=1;
		}
		sum+=k;
		j+=1;
	}
	printf("%.14lf",sum);
	return 0;
}