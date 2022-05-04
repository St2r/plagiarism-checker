"""
2022-03-26 22:14:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1684 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n],i;
   int j,sum=0;
   for(i=1;i<=n;i++){
   	scanf("%d",&a[i]);
   }
   for(i=1;i<=n;i++){
   	  for(j=1;j<a[i];j++){
   	  	 if(a[i]%j==0){
   	  	 	sum=sum+j;
			  } 
		 }
	   if(sum==a[i]){
	   	printf("YES\n");
	   }
	   if(sum!=a[i]){
	   	printf("NO\n");
	   }
	   sum=0;	 
   }
   return 0;
}