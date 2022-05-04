"""
2022-03-26 17:36:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 3 ms | 1604 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include <stdio.h>
int is_perfect(int n)
{
	int i,j,z[1000]={1,0},sum=0;
	for (i=2,j=1;i<=n/2;i++)
	if (n%i==0)
	z[j++]=i;
	for (i=0;i<j;i++)
	sum+=z[i];
	if (sum==n)
	return 1;
	else
	return 0;
}
main ()
{
	int n,i,x[100];
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	scanf ("%d",&x[i]);
	for (i=0;i<n;i++){
		if (is_perfect(x[i]))
		printf ("YES\n");
		else
		printf ("NO\n");
	}
}