"""
2022-03-26 15:22:01
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1620 KB
Accepted | 1 * (1 / 10) | 4 ms | 1636 KB
Accepted | 1 * (2 / 10) | 5 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 16 ms | 1636 KB

"""

#include <stdio.h>
int main()
{
	int n,m;
	int a[100]={0},b[100]={0};
	int i=0;
	scanf("%d",&n);
	m=n;
	while(n--)
	{
		scanf("%d",a[i]);
		i++;
	}
	int j=1,k=0,l=0,h=0,sum=0;
	for(l=0;l<m;l++)
	{
	for(j=1;j<a[l];j++)
	{
		if(a[l]%j==0)
		{
		    b[k]=j;
		    k++;
		}
	}
    for(h=0;h<=k;h++)
    {
    	sum=sum+b[h];
	}
	if(sum=a[l])
	printf("YES\n");
	else
	printf("NO\n");
    }
	return 0;
}