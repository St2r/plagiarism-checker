"""
2022-03-26 13:00:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1712 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	long long int n;
	int i,j=1;
	double sum=1.0;
	scanf("lld",&n);
	if(n>17)
		n=17;
	for(i=1;i<n;i++)
	{
		j*=i;
		sum=sum+1.0/j;
	}
	printf("%.14f",sum);
	return 0; 
}