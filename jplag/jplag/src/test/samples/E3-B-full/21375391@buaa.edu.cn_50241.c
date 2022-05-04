"""
2022-03-29 22:18:45
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1576 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{ 
  int n,t,i,k,p=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
  	scanf("%d",&t);
  	for(k=1;k<t;k++){if(t%k==0){p=p+k;}}
  	if(p==t){printf("YES\n");}
  	else{printf("NO\n");}
  	p=0;
  }
   
   return 0;
}