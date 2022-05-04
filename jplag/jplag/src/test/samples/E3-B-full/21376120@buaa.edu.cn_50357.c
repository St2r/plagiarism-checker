"""
2022-03-26 14:53:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 10 ms | 1700 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int main() {
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		int sum=0;
		scanf("%d",&a);
		for(int i=1;i<a;i++){
			if(a%i==0){
				sum=sum+i;	
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