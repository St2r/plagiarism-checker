"""
2022-03-29 23:48:53
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1576 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100],k,j,cont=0;
	
	scanf("%d",&n);
	for(k=0 ; k<n ; k++)
	{
		scanf("%d",&a[k]);
	}
	
	
	for(k=0 ; k<n ;k++)
{
	j=1;
	while(j <= a[k])
	{
		if( a[k] %  j ==0)
		{
			cont += j;
			j++;
		}
		else
		j++;
	}
	
	
	if(2*a[k] == cont)
	printf("YES\n");
	else
	printf("NO\n");
	cont=0;
}
	
	return 0;
}