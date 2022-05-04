"""
2022-03-27 23:10:06
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1536 KB
Accepted | 1 * (35 / 100) | 3 ms | 1536 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
 int n,a,i=0,sum=0,j;
 scanf("%d", &n);
 for (i = 1; i<=n; i++)
 {scanf("%d", &a);
 for(j=1,sum=0;j<=a-1;j++){
 	if(a%j==0){
	sum=sum+j; }
 }
 if(sum==a){printf("YES\n");
 }else{
 printf("NO\n");}
 }
 return 0;
}