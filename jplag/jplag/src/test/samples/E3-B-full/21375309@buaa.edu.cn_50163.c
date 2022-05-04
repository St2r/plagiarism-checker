"""
2022-03-26 15:39:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 7 ms | 1560 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include<stdio.h>
int main(){
	int n,a,i,sum;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		i=1;
		sum=0;
		while(i<a){
			if(a%i==0){
				sum=sum+i;
			}
			i++;
		}
		if(sum==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}