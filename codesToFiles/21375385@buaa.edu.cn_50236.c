"""
2022-03-28 19:03:58
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double sum=1,temp=1;
	scanf("%d",&n);
	if(n>=17){
		n=17;
	}
	for(int i=1;i<=n;i++)
	{
		temp*=i;
		sum+=1.0/temp;
	}
	printf("%.14f",sum);
	return 0;
	
}