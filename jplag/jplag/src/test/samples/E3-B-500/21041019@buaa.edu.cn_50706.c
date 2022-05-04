"""
2022-03-26 19:48:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 9 ms | 1684 KB
Accepted | 1 * (60 / 100) | 846 ms | 1688 KB

"""

#include <stdio.h>
int main(){
	int n,a,b=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		for(int i=1;i<=(a/2);i++){
			for(int j=1;j<=(a/2);j++){
				if(i*j==a){
					b=b+i;
				}
			}
		}
		if(b==a){
			printf("YES\n");
		}
		if(b!=a){
			printf("NO\n");
		}
		b=1;
	}
	return 0;
}