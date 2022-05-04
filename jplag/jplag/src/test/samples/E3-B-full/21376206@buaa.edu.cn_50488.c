"""
2022-03-28 16:24:52
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1664 KB
Accepted | 1 * (35 / 100) | 3 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include<stdio.h>

int main(){
	
	int n, x[101], i, j, sum=0;
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		
	    scanf("%d", &x[i]);
		for(j=1;j<x[i];j++){
			if(x[i]%j==0){
				sum=sum+j;
			    }
			
			}	
		if(sum==x[i]){
			printf("YES\n");
			}
		else{
			printf("NO\n");
		    }
		
		sum=0;
	}
	
	
	
	return 0;
	
}