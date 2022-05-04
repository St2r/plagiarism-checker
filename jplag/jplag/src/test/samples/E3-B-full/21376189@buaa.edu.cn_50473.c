"""
2022-03-28 21:39:12
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include <stdio.h>
int main()
{
int i,j,k,n,a[110],count[10000]; 
scanf("%d", &n);
for(i=0; i<n; i++) 
scanf("%d",&a[i]);
for(j=0; j<n; j++)
{
	count[j]=0;
	for(k=1;k<a[j];k++)
	{
		if(a[j]%k==0)
		count[j]+=k;
		else
		continue;
	}
	if(count[j]==a[j])
	printf("YES\n");
	else
	printf("NO\n");
}
return 0;
}