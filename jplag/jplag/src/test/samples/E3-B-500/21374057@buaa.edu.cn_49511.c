"""
2022-03-30 15:19:18
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1628 KB
Accepted | 1 * (35 / 100) | 0 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include<stdio.h>

int main()
{int n,i=0,a;
scanf("%d",&n);
for(i;i<n;i++)
{
	scanf("%d",&a);
	int sum=0;
	for(int k=1;k<a;k++)
	{
		if(a%k==0)
		{
			sum+=k;
		}
	}
	if(a==sum)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}