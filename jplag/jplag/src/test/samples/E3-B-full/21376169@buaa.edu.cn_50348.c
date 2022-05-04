"""
2022-03-27 13:48:45
AC
1.0
Accepted | 1 * (1 / 8) | 3 ms | 1656 KB
Accepted | 1 * (1 / 8) | 2 ms | 1632 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Accepted | 1 * (1 / 8) | 2 ms | 1656 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Accepted | 1 * (1 / 8) | 2 ms | 1708 KB
Accepted | 1 * (1 / 8) | 3 ms | 1712 KB
Accepted | 1 * (1 / 8) | 3 ms | 1616 KB

"""

#include<stdio.h>
int main(){
	 int n,a[100],sum=0,k,m;
	 scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
	scanf("%d",&a[k]);
	 	for(m=1;m<a[k];m++)
	 	{
	 		if(a[k]%m==0)
	 		sum=sum+m;
		 }
	 	if(sum==a[k])
	 	printf("YES\n");
	 	else
	 	printf("NO\n");
	 	sum=0;
	 }
	
	
	
	
	return 0;
}