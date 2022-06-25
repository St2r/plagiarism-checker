"""
2022-03-29 12:29:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 0 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double fm = 1, sum=1;
	if(n>17){
		n=17;
	}
	int i;
	for(i=1; i<=n; i++)
	{
		fm *= i;
		sum += 1.0/fm;
	}
	
	printf("%.14lf\n",sum);
	return 0;
}