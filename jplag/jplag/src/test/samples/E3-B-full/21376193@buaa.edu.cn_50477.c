"""
2022-03-29 23:26:01
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,n_i,n_o[100]={};
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&n_i);
		for(int i1=1;i1<n_i;i1++){
			if(n_i%i1==0){
				n_o[i]=n_o[i]+i1;
			}
		}
		if(n_o[i]!=n_i){
			n_o[i]=0;
		}
		else{
			n_o[i]=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(n_o[i]==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}