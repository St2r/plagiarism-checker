"""
2022-03-28 22:39:01
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>
int main(){
	int n,i=0,j,k,l,sum,x[10005];
	scanf("%d",&n);
	l=n;
	while(n--){
		scanf("%d",&x[i]);
		i++;
	}
	for(j=0;j<l;j++){
		sum=0;
		for(k=1;k<x[j];k++){
			if(x[j]%k==0){
				sum+=k;
			}
		}
		if(sum==x[j])
		   printf("YES\n");
		else
		   printf("NO\n");
	}
}