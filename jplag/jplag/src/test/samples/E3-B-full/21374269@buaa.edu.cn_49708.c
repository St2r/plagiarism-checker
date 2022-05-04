"""
2022-03-28 20:36:55
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
 int n,x,sum=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     scanf("%d",&x);
 
     
 

    for(int i=1;i<x;i++)
    {
         if(x%i==0)
            sum=sum+i;
    }
   

	if(sum==x)
        printf("YES\n");
    else
        printf("NO\n");
        
         sum=0;
  }

return 0;

}