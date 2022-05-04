"""
2022-03-26 13:28:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 2044 KB
Accepted | 1 * (35 / 100) | 2 ms | 1940 KB
Accepted | 1 * (60 / 100) | 6 ms | 2044 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,i,r,d=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		for(r=1;r<=sqrt(a[i]);r++){
			if(a[i]%r==0){
				d=d+r;
				if(r>1){
					d=d+a[i]/r;
				}
			}
		}
		if(d==a[i]){
			printf("YES\n");
		}
		else
		printf("NO\n");
		d=0;
	}
	
	return 0; 
}