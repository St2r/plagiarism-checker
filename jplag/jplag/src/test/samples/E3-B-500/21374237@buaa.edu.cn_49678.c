"""
2022-03-29 13:51:46
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1696 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>

int main() 
{
   int n,i=0;
   int a[105];
   scanf("%d",&n);
   for(;i<n;i++){
   	    scanf("%d",&a[i]);
   	    int sum=0;
   	    for(int s=1;s<a[i];s++){
	   	    if(a[i]%s==0){
		   	sum+=s;   	
		   }
		    else continue;
	    }
	    if(sum==a[i]){printf("YES\n");}
	    else{printf("NO\n");}
	        		
	}
	
	return 0;		
}