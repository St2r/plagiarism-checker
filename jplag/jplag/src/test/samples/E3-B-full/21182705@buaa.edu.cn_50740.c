"""
2022-03-27 22:11:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 7 ms | 1664 KB

"""

#include <stdio.h>


int main()

{
    int  a[101] , j[10001], n ;
      
    scanf("%d", &n);
    
   for(int i=0;i<n;i++){
   
        scanf("%d", &a[i]);
   
        }
   
   for(int i=0 ;i<n;i++){
   	
   	    j[i]=0;
   
        for(int m=1 ; m<a[i] ; m++){
   	        
   	        if( a[i] % m == 0 ){
   		          		        
   		        j[i]=j[i]+m;
   		           		
	            }
   	        }
   	        
   	    if(j[i]==a[i]){
   	    
   	        printf("YES\n");
   	        
   	        }
   	        
   	    else{
   	    
   	        printf("NO\n");
   	        
   	        }
		
        }
   
   return 0;
   
}