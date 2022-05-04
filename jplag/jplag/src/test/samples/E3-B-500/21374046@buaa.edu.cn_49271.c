"""
2022-03-26 08:10:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1944 KB
Accepted | 1 * (35 / 100) | 2 ms | 2100 KB
Accepted | 1 * (60 / 100) | 9 ms | 2092 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,sum,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		sum=-a;
		for(j=1;j<=sqrt(a);j++){
			if(a%j==0){
				sum+=j+a/j;
			}
		}
		if(sum==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}