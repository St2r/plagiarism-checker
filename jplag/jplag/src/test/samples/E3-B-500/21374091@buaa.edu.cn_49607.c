"""
2022-03-26 15:09:40
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1696 KB
Accepted | 1 * (35 / 100) | 10 ms | 1616 KB
Accepted | 1 * (60 / 100) | 5 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
	int n,x,i,j,s0=0,x0=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
	
		for(j=1;j<x;j++){
			x0=x%j;
			if(x0==0){
				s0+=j;
			}
		}
	if(s0==x){
		printf("YES\n");
		
	}
	else{
		printf("NO\n");
	}
	s0=0;
		
	}
	

	

	return 0;
}