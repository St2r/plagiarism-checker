"""
2022-03-27 21:17:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1568 KB
Accepted | 1 * (60 / 100) | 4 ms | 1720 KB

"""

#include<stdio.h>
int main()
{   int i=0,j,k=0,n,x[n];
   scanf("%d",&n);
   while(i<n)
{  scanf("%d",&x[i]);
   for(j=1;j<x[i];j++)//j<x  is important
   {   if(x[i]%j==0)
   {   k=k+j;
   }
   }
   if(x[i]==k)
   {printf("YES\n");
   }
   else printf("NO\n");
   k=0;
   i++;
}
	
	
	return 0;
}