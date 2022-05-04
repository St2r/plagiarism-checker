"""
2022-03-29 12:44:24
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 2 ms | 1628 KB

"""

#include<stdio.h>
int main(){
	int i,j,k,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&j);
		s=0;
		for(k=1;k<j;k++){
			if(j%k==0){
				s=s+k;
			}
			}if(s==j) {
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		
	}
	return 0;
}