"""
2022-03-29 12:31:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 2128 KB
Accepted | 1 * (35 / 100) | 1 ms | 2060 KB
Accepted | 1 * (60 / 100) | 1 ms | 2060 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
	
	int n,a,i,b,k,sum=1;
	scanf("%d",&n);
	int j[n];
	
	memset(j,0,sizeof(j));
	for( i=1;i<=n;i++){
		scanf("%d",&a);
	
		for( b=1;b<=sqrt(a);b++){
			if(a%b==0&&b!=1){
				
				if(b==a/b){
					sum+=b;
				}
				
				else sum+=b+a/b;
			}
			
		}
		
		if(sum==a&&a!=1){
			j[i-1]=1;
		}
		
		sum=1;
	}
	
	
	for( k=0;k<n;k++){
		if(j[k]==1){
			printf("YES");
		}
		else printf("NO");
		
		if(k<n-1){
			printf("\n");
		}
	}
	
	return 0;
}