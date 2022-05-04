"""
2022-03-27 18:39:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 4 ms | 1484 KB
Accepted | 1 * (60 / 100) | 4 ms | 1612 KB
 KB
Accepted | 1 * (1 / 8) | 14 ms | 1628 KB
Accepted | 1 * (1 / 8) | 2 ms | 1696 KB
Accepted | 1 * (1 / 8) | 2 ms | 1624 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 960 KB
Time Limit Exceed | 0 * (1 / 8) | 1000 ms | 876 KB
B

"""

#include<stdio.h>
  int main(){
  	int n,a,b[10000];
  	scanf("%d",&n);
  	int i,j=0,k;
  	int sum=0;
  	for(k=0;k<n;k++){
    scanf("%d",&a);
		j=0;
		sum=0;			
  	for(i=1;i<a;i++){
  		if(a%i==0){
  			b[j]=i;
  			j++;
		  }
	  }
  	for(i=0;i<j;i++){
  		sum+=b[i];
	  }

	  if(sum==a) printf("YES\n");
	  else printf("NO\n");
	  for(i=0;i<j;i++){
	  	b[i]=0;
	  }
  }
  	
  	return 0;
  }