"""
2022-03-26 10:36:10
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1592 KB
Accepted | 1 * (1 / 10) | 6 ms | 1648 KB
Accepted | 1 * (2 / 10) | 9 ms | 1668 KB
Accepted | 1 * (2 / 10) | 5 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1596 KB

"""

#include<stdio.h>
int main(){
	long long int n,i,j,x=1;
	double ans=1;
	scanf("%lld",&n);
	if(n<51){
		for(i=1;i<n+1;i++){
		for(x=i,j=i-1;j>0;j--){
			x=x*j;
			}
		ans+=(double)1/x;			
	}
	printf("%.14lf",ans);
	}
	else{
		for(i=1;i<51;i++){
		for(x=i,j=i-1;j>0;j--){
			x*=j;
					}
		ans+=(double)1/x;			
	}
	printf("%.14lf",ans);	
	}
	
	return 0;
}