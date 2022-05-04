"""
2022-03-26 14:15:55
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 3 ms | 1544 KB
Accepted | 1 * (60 / 100) | 55 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
int i,n,a[100],b,c,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
sum=1;
for(b=1;b*b<=a[i];b++) 
{
	for(c=1;c<a[i];c++)
	{
		if(b*c==a[i])
		sum=sum+b+c;
	}
}
if(sum==a[i])
printf("YES\n");
else printf("NO\n");
}
return 0;
 }