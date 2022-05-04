"""
2022-03-27 15:44:49
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1632 KB
Accepted | 1 * (1 / 4) | 3 ms | 1696 KB
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 2 ms | 1572 KB

"""

#include <stdio.h>

int main()
{
   int n,x;
   int sum = 0;

   scanf("%d",&n);
   while(scanf("%d",&x)!=EOF)
   {
       for(int i= 1;i<n;i++)
       {
           if(x%i ==0)
           {
               sum += i;
           }
       }
       if(sum == x)
        printf("YES\n");
       else
        printf("NO\n");
   }
   return 0;


}