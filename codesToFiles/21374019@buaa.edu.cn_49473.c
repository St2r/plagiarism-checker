"""
2022-03-26 20:35:45
AC
1.0
nan
"""

#include<stdio.h>
  int main(){
  	int n,i,j;
  	double e=0,a;
  	scanf("%d",&n);
  	for(i=0;i<=n;i++){
  		if(i==0) e+=1;
		else{
		a=1;
		  for(j=1;j<=i;j++){
  			a*=j;
		  }
		  
		if(1/a<1e-15) break;
		 else e+=1/a;
	  }
  }
  	printf("%.14lf",e);
  	return 0;
  }