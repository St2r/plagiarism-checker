"""
2022-03-29 23:06:45
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a,sum=0;
   scanf("%d",&n);
   for (int i=0;i<n;i++){
    scanf("%d",&a);
    sum=0;
   for(int b=1;b<a;b++){
    if (a%b==0)
        sum=sum+b;}
    if(sum==a)
        printf("YES\n");
    else printf("NO\n");

   }

    return 0;
}