"""
2022-03-29 22:22:43
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB

"""

#include <stdio.h>
int main()
{

	int m,p;
	scanf("%d",&m);
	for(p=1;p<=m;p++)
	{
		int n,i=1,j=0,d=0;
	int sum=0;
	int a[100];
	scanf("%d",&n);
	while(i<n)
{
	if((n%i)==0)
	{
		a[j]=i;
			j++;
	}
	i++;

	}	

 while(d<j)
{
	sum=sum+a[d];
	d++;
}

if(sum==n)
{
	printf("YES\n");
 } 
 else
 {
 	printf("NO\n");
 }

} 
	return 0;
}