"""
2022-03-26 11:55:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 11 ms | 1640 KB
Accepted | 1 * (4 / 10) | 4 ms | 1640 KB
KB

"""

#include<stdio.h>
int main(){
int n,xi,sum,i,m;
i=1;
m=1;
sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
   scanf("%d",&xi);
   for(m=1;m<xi;m++)
   {if(xi%m==0){sum=sum+m;}}
   
   if(sum==xi){printf("YES\n");}
   else{printf("NO\n");}
   
}
return 0;	
}