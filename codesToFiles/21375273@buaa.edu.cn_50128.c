"""
2022-03-26 19:23:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>
#include <math.h>
#define ll long long
int main()
{
	int n;
	ll result=1;
	double sum=1.0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		result*=i;
		sum+=1.0/result;
		if(result>pow(10,14)){
			break;
		}
	}
	printf("%.14f",sum);
	return 0;
}