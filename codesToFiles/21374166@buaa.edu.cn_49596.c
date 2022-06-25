"""
2022-03-26 20:46:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include <stdio.h>

int main()
{int n,i,j;
double a[30]={0},sum=0;
 	scanf("%d",&n);  
 	a[0]=1;
	 a[1]=1;
	if(n>30)
		n=30;
	for(i=1;i<=n;i++)	
	 	if(i>1)
			a[i]=1.0*a[i-1]/i; 
	for(i=0;i<=n;i++)
		sum+=a[i];
		
	printf("%.14f",sum);
 
	return 0;
}