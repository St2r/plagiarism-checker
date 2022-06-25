"""
2022-03-28 14:27:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main(){
	int n,i;
	double j=1,sum=1,k=1e-14;
	scanf("%d",&n); 
	for(j=i=1;i<=n;i++)
	{
		j*=i;
		sum+=(1.0/j*1.0); 
		if((1.0/j*1.0)<k)
		break;
	}
	printf("%.14lf",sum);
	return 0;	
	
}