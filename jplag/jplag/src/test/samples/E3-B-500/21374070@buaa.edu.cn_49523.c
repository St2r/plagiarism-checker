"""
2022-03-27 13:40:26
AC
1.0
Accepted | 1 * (1 / 8) | 2 ms | 1632 KB
Accepted | 1 * (1 / 8) | 8 ms | 1556 KB
Accepted | 1 * (1 / 8) | 3 ms | 1660 KB
Accepted | 1 * (1 / 8) | 2 ms | 1712 KB
Accepted | 1 * (1 / 8) | 2 ms | 1660 KB
Accepted | 1 * (1 / 8) | 3 ms | 1712 KB
Accepted | 1 * (1 / 8) | 2 ms | 1692 KB
Accepted | 1 * (1 / 8) | 2 ms | 1644 KB

B

"""

#include <stdio.h>

int main(){
	int n,i,j,sum=0,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0){
				sum+=j;
			}
		}
		if(a==sum){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		a=0;sum=0;
	}
	return 0;
}