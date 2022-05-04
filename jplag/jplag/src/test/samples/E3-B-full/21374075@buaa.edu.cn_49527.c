"""
2022-03-26 09:05:09
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1712 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 16 ms | 1656 KB

"""

#include<stdio.h>
int main(){
	int n,a;
	scanf("%d",&n);
	while(n--){
		int sum=0;
		scanf("%d",&a);
		for(int i=1;i<=a/2;i++){
			if(a%i==0) sum+=i;
		}
		if(sum==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}