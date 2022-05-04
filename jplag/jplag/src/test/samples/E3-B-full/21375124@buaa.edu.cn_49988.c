"""
2022-03-29 14:45:41
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1648 KB
Accepted | 1 * (60 / 100) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main()
{
 	int a[110]; 	
 	int n,sum=0;
 	scanf("%d",&n);
 	for(int i=0;i<n;i++)
 	scanf("%d",&a[i]);
 	 
 	for(int j=0;j<n;j++){
	 	for(int u=1;u<=a[j]/2;u++)
	 	if(a[j]%u==0)
	 	sum+=u;
	 	
	 	if(sum==a[j])
	 	printf("YES\n");
	 	else
	 	printf("NO\n");
	 	sum=0;
	 }
	 
 return 0;
}