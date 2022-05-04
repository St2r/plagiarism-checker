"""
2022-03-26 14:04:29
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1936 KB
Accepted | 1 * (35 / 100) | 3 ms | 2016 KB
Accepted | 1 * (60 / 100) | 3 ms | 2068 KB

"""

#include<stdio.h> 
#include<math.h>
int main(){
	int n, i, a, div, res, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a);
		for(div=1; div<=sqrt(a); div++){
			res = a / div;
			if(a % div == 0){
				sum =  sum + div + res;}}
			     if(sum == 2*a){
	             printf("YES\n");
	                }   else{
		                  	printf("NO\n"); 
		                             	}
										 sum=0;}
		return 0;
	}