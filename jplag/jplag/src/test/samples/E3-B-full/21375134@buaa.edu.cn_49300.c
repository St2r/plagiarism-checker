"""
2022-03-27 09:19:58
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include <stdio.h>
int main(){
	int n,x,i,k,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		for(k=1;k<x/2+1;k++){
			if(x%k==0){
				y+=k;
			}	
		}
		if(x==y)
		printf("YES\n");
		else
		printf("NO\n");
		y=0;
	}
	return 0;
}