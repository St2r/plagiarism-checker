"""
2022-03-28 16:12:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
int main (){
	int n,i,j,sum=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		for(j=1;j<x;j++){
			if(x%j==0)
			sum+=j;
		}
		if(sum==x){
		printf("YES\n");
		sum=0;	
		}
		else{
		printf("NO\n");	
		sum=0;
		}
		
	} 
}