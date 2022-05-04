"""
2022-03-28 20:17:44
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include<stdio.h> 
int main() 
{  
int n,x[101],i=0,j,sum;  
scanf("%d",&n);  
while(i<n){   
scanf("%d",&x[i]);  
 i++;  } 
  for(i=0;i<n;i++){
  sum =0; 
    for(j=1;j<x[i];j++){  
	  if(x[i]%j==0)   
	   sum=sum+j; 
	     }  
		  if(sum==x[i]) 
		    printf("YES\n");
			   else 
			     printf("NO\n"); 
			    } 
				 return 0;
				  }