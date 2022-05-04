"""
2022-03-29 23:18:54
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 1 ms | 1652 KB

"""

#include <stdio.h>
   int main() {
    int n,x,a,c; 
	scanf("%d",&n);
	 int i,j;
	  for(i=0;i<n;i++){ 
	  int x;
	   scanf("%d",&x);
	   int a[300]={0},c=0;
	    for(j=1;j*j<=x;j++){ 
		if(j==1){ a[0]=1; 
		c++; 
		continue;
		} 
		if((x%j)==0){ a[c]=j; a[c+1]=x/j;
		 c+=2;
		 }
		  } 
		  int sum=0;
		   for(j=0;j<c;j++){ sum+=a[j];
		    } printf((sum==x)?"YES\n":"NO\n"); 
			}
			 return 0; 
			 }