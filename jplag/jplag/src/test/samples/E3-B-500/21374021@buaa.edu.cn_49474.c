"""
2022-03-26 13:26:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 9 ms | 1552 KB
Accepted | 1 * (60 / 100) | 11 ms | 1704 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int main()
{
 int n, m, sum=0;
 scanf("%d", &n);
 for(int i=1;i<=n;i++)
 {
 	scanf("%d", &m);
 	for(int j=1;j<m;j++)
 	{
 	  if((m%j)==0)
	   {
	   	  sum=sum+j;
	   }	
    }
    if(sum==m)
    printf("YES\n");
    else
    printf("NO\n");
    sum=0;
 }


return 0;
}