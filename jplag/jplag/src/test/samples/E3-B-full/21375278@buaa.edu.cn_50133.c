"""
2022-03-26 09:26:31
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1588 KB
Accepted | 1 * (35 / 100) | 3 ms | 1588 KB
Accepted | 1 * (60 / 100) | 18 ms | 1668 KB

"""

#include<stdio.h>
int main(){
	int n,a,sum,i1;
	scanf("%d",&n);
	while((scanf("%d",&a))!=EOF){
		sum=0;
		for(i1=1;i1<=a-1;i1++){
			if(a%i1==0){
				sum+=i1;
			}
		}
		if(sum==a){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}