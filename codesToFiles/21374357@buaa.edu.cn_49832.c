"""
2022-03-29 23:01:19
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 0 ms | 1732 KB

"""

#include <stdio.h>
double pow(int);
int main()
{
	int n,i;
	double sum=1;
	scanf("%d",&n);
	if(n>17){
		n=17;
	}
	for(i=1;i<=n;i++){
		sum=sum+pow(i);
	}
	printf("%.14f",sum);
	return 0;
	
}
double pow(int n)
{
	int i;
	double ans=1;
	for(i=1;i<=n;i++){
		ans=(double)ans/i;
	}
	return ans;
}