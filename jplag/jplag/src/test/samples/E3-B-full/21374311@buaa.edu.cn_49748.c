"""
2022-03-26 15:59:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1684 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
int main(){
	int n,i,m,j,e,q=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=1;j<m;j++){
			if(m%j==0){
				q=q+j;
			}
			
		
		}
		if(q==m){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	    q=0;
		}
		
			return 0;
	}