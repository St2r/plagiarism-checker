"""
2022-03-29 14:20:38
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1632 KB

"""

#include <stdio.h>

int main() 
{
   int n;
   scanf("%d",&n);
   double e=1.0,k=1.0;
   if(n<=17){
   	for(double j=1;j<=n;j++){
   		k=1;
	   	for(double i=1;i<=j;i++){
		   	k=k/i;
		    }
		e+=k;
	   }
   	printf("%.14f",e);
   }
   else{
   	for(double j=1;j<=17;j++){
   		k=1;
	   	for(double i=1;i<=j;i++){
	   		k=k/i;
	   		}
	   	e+=k;
	   	}
	printf("%.14f",e);
   }
	return 0;		
}