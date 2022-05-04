"""
2022-03-26 13:59:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 3 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
   int n,a[100]={0};
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
	} 
for(int i=0;i<n;i++)
{
	int sum=0;
	for(int j=2;j<a[i];j++)
	{
		if(a[i]%j==0)
		sum=sum+j+a[i]/j;
	}
	if(sum/2+1==a[i])
	printf("YES\n");
	else
	printf("NO\n");
}
	return 0;
}