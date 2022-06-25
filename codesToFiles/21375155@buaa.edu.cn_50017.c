"""
2022-03-29 17:03:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>
int main (){
	double ans,a;
	long long int n,i,j,k;
	ans=1;
	scanf ("%lld",&n);
	if(n>=17)
	n=17;
	for(i=1;i<=n;i++){
		k=i;
		for (j=i-1;j>=1;j--){
			k=k*j;
		}
		a=1.0/k; 
		ans=ans+a; 
	}
	printf ("%.14f",ans);
}