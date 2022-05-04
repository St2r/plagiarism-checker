"""
2022-03-26 12:42:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 12 ms | 1680 KB

"""

#include <stdio.h>
int x,n;
int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		int s=1;
		for(int j=2;j<x;j++){
			if(x%j==0){
				s+=j;
			}	
	}
		if(s==x){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	
	return 0;
}