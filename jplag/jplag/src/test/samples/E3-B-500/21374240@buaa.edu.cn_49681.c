"""
2022-03-26 14:36:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2016 KB
Accepted | 1 * (35 / 100) | 3 ms | 2096 KB
Accepted | 1 * (60 / 100) | 3 ms | 2096 KB

"""

#include <stdio.h>
#include <math.h>
int main (){
	int n,a,i,A[1000]={0},k,m,sum=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a);
		for(sum=0,k=2;k<sqrt(a);k++){
			
			if (a%k==0){
				sum+= k+a/k;
			}
		}
		if (sum==a-1){
			printf ("YES\n");
		}else {
			printf ("NO\n"); 
		}
	}
	return 0;
}