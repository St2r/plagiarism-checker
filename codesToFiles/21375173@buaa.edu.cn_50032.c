"""
2022-03-29 20:31:16
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
  int i,n;               
  double sum,a;
  a=1;      
  sum=1;                                     
  scanf("%d",&n);
  if(n<100){
  for(i=1;i<=n;i++){
            a=a/i;          
        sum+=a;
  }
  }else{for(i=1;i<=100;i++){
            a=a/i;          
        sum+=a;
  }
  }
 printf("%.14f",sum);
return 0;
}