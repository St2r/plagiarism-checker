"""
2022-03-29 00:15:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1608 KB
Accepted | 1 * (35 / 100) | 1 ms | 1720 KB
Accepted | 1 * (60 / 100) | 3 ms | 1624 KB

"""

#include <stdio.h>
  int main()
  { 
   int n;
   scanf("%d",&n);
   int i,b,c,e,x,m;
   for(m=0;m<n;m++)
   { scanf("%d",&x);
   b=0;
   c=0;
   int a[10005]={};
   for(i=1;i<x;i++)
{   if(x%i==0)
{   a[b]=i;
    b++;
    
}
   }  
   for(b=0;b<x;b++) 
   {c=c+a[b];
   }
   if(c==x)
   printf("YES\n");
   else
   printf("NO\n");
   }
   return 0;
}