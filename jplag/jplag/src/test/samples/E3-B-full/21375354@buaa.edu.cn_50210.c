"""
2022-03-27 23:22:58
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
	int n;
	int x;
	int i,j;
	int m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		m=x;
	  for(j=1;j<x;j++){
	     if(x%j==0){
		     m=m-j;
	      }
         }
	      if(m==0){
	      	printf("YES\n");
	       }
	      else{
		    printf("NO\n");	
           }
        } 
    return 0;
}