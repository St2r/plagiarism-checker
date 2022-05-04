"""
2022-03-29 14:09:14
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1688 KB

"""

#include <stdio.h>
#include <math.h>
int main(){
	int n,x[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
		int a=0;
		for(int j=1;j<x[i];j++){
			if(x[i]%j==0){
				a+=j;
			}
		}
		if(a==x[i]){
			printf("YES\n");
		}
		else{printf("NO\n");}
	}
	return 0;
}