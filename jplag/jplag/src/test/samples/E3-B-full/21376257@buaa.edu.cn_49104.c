"""
2022-03-29 22:09:31
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2060 KB
Accepted | 1 * (35 / 100) | 1 ms | 2136 KB
Accepted | 1 * (60 / 100) | 1 ms | 1980 KB

"""

#include<stdio.h>
#include<math.h>

int main(){
  	int n,sum=0,i=1,j,k;
 	scanf("%d",&k);
	while(k--){ 
 	scanf("%d",&n);
	for(i=1;i<sqrt(n);i++){
 		if(n%i==0){
 			sum+=i;
 			if((n/i)!=n&&i!=n){
 				sum+=(n/i);
			 }
		 }
	 }
	if(sum==n){
		printf("YES\n");
	}
	else
		printf("NO\n");
	sum=0;
	}	
 }