"""
2022-03-29 19:36:53
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include<stdio.h>
int main ()
{
	int n,m,k,i,b;
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{
	  scanf("%d",&m);
	  b=0;
	  for(i=1;i<m;i++)
	     {
		     if(m%i==0)
		     {
		     	b+=i;
			 }
		      
	     }
	if(b==m)
    {
	   printf("YES\n");
	}else{
	   printf("NO\n");
         }
    }
	return 0;
 }