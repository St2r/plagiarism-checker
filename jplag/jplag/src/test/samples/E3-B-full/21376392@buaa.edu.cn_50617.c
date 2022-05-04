"""
2022-03-27 19:04:51
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1592 KB
Accepted | 1 * (1 / 10) | 4 ms | 1548 KB
Accepted | 1 * (2 / 10) | 5 ms | 1696 KB
Accepted | 1 * (2 / 10) | 4 ms | 1632 KB
Accepted | 1 * (4 / 10) | 3 ms | 1704 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
  int a[105];
  int n,i=1;
  int j=1;
  int sum=0;

  scanf("%d\n",&n);
  for(i=1;i<=n;i++){
     scanf("%d",&a[i]);
     
     for(j=1;j<a[i];j++){
        if(a[i]%j==0){
           sum=sum+j;
        }
     }
   
     if(sum==a[i]){
       printf("YES\n");
     }else{
       printf("NO\n");
     }
  }
  
  return 0;
}