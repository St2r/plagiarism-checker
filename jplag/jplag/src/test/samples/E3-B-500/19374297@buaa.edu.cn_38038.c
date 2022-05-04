"""
2022-03-28 22:10:14
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 1 ms | 1696 KB
Accepted | 1 * (60 / 100) | 7 ms | 1632 KB

"""

#include<stdio.h> 
#include<math.h>
int main()
{
    int n;
	int i,k;
	int count=0;
	long long int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		count=0;
		for(k=1;k<a[i];k++)
		{
			if(a[i]%k==0)
			count=count+k;
		}
		if(a[i]!=count)
		{printf("NO\n");}
		else
		{printf("YES\n");}
	}
	return 0;
}