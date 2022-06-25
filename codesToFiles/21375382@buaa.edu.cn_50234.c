"""
2022-03-28 19:40:15
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

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