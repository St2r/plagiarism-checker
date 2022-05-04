"""
2022-03-29 23:24:50
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1648 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
 int b=0,i,a,n,c,sum=0;
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a);
 	sum=0;

 for(c=1;c<a;c++)
 {
 
 	if(a%c==0)
 	{
 	
	 sum+=c;
    }
 }
 if(sum==a)
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