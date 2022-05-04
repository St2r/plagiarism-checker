"""
2022-03-26 23:41:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1680 KB

"""

#include<stdio.h>
int main(){
	int n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		int sum=1;
		for(int i=2; i<x; i++){
			if(x%i==0) sum+=i;
		}
		if(sum==x) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}