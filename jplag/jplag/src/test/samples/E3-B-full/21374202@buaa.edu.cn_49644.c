"""
2022-03-29 22:08:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 0 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include <stdio.h>
int main(){
	int n,i=0,j,k,l,sum,x[1005];
	scanf ("%d",&n);
	l=n;
	while(n--){
		scanf("%d",&x[i]);
		i++;
	}
	for(j=0;j<l;j++){
		sum=0;
		for(k=1;k<x[j];k++){
			if(x[j]%k==0) {
			sum=sum+k;}
		}
		if(sum==x[j]) printf("YES\n");
		else printf("NO\n");
	}



	return 0;

	
}