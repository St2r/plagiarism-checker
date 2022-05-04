"""
2022-03-28 22:32:58
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1576 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main(){
int n=0,x=0,sum=0;

scanf("%d",&n);
for (int m = 0; m < n; m++){
scanf("%d",&x);
  for (int i = 1; i <=x-1; i++)
  {
    if (x%i==0)
    {
      sum = i + sum;
    }
}
    if (sum==x)
  {
    printf("YES\n");
  }
  else
     printf("NO\n"); 
sum = 0;
}
  return 0;
}