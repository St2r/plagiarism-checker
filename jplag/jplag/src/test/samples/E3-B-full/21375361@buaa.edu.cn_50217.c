"""
2022-03-26 15:04:48
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main()
{
	int n,a;
     scanf("%d",&n);
     
     
     for(int i=1;i<=n;i++)
     {
     	int sum=0;
     	scanf("%d",&a);
     	
     	if(a==1)
     	{
		 printf("YES\n");
		 break;
     }
     	for(int k=1;k<=a/2;k++)
     	if(a%k==0)
     	sum+=k;
     	
     	if(sum==a)
     	printf("YES\n");
     	else
     	printf("NO\n");
	 }
     
     
     
     
     
     
     
	return 0;
 }