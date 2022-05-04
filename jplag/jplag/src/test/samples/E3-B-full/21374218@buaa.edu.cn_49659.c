"""
2022-03-26 08:36:58
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1984 KB
Accepted | 1 * (35 / 100) | 7 ms | 2052 KB
Accepted | 1 * (60 / 100) | 10 ms | 2092 KB

"""

#include <stdio.h>
int main() {
	int n,a,i,sum;
	scanf("%d",&n);
	while((scanf("%d",&a))!=EOF){
		sum=0;
		if(a==1){
			printf("NO\n");
		}
		else{
			for(i=1;i<a;i++){
				if(a%i==0){
					sum+=i;
				}
			}
			if(sum==a){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
	
}