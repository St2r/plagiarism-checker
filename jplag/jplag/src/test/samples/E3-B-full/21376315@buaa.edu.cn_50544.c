"""
2022-03-29 22:38:03
CE
0.0
main.c:23:5: error: expected identifier or '(' before '/' token
   }*/
     ^
main.c: In function 'main':
main.c:5:3: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
   scanf("%d",&n);
   ^~~~~~~~~~~~~~
main.c:7:3: warning: ignoring return value of 'scanf', declared with attribute warn_unused_result [-Wunused-result]
   scanf("%d",&a[i]);
   ^~~~~~~~~~~~~~~~~


"""

#include <stdio.h>
int main()
{
  int n,i,s=0,a[n],x;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  i=0;
  while(i<n) {
  
  for(x=1;x<a[i];x++){
   if(a[i]%x==0)
   s+=x;

    }
  
   if(s==a[i])
   printf("YES\n");
   else
   printf("NO\n");                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
   i++;}
   return 0;
  }*/