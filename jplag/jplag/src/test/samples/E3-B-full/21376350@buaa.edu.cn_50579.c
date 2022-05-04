"""
2022-03-28 12:04:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include <stdio.h> 
int main()
 {int n,i=0,a[99999],sum=0,q,w;
scanf("%d",&n);
  while(i<n)
{scanf("%d",&a[i]);
i++;}
for(q=0;q<n;q++)
   { for(w=1;w<a[q];w++)
      {if(a[q]%w==0)
      sum=sum+w;   }
    
 if(sum==a[q])   
printf("YES\n");
 if(sum!=a[q])
printf("NO\n");
sum=0;
   }
 return 0;
 }