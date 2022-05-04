"""
2022-03-28 19:12:05
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1652 KB
Accepted | 1 * (35 / 100) | 16 ms | 1652 KB
Accepted | 1 * (60 / 100) | 20 ms | 1624 KB

"""

#include <stdio.h>
int main(){
int n;
scanf("%d",&n);
int a;
while(n--){
	scanf("%d",&a);
	int i=1,sum=0;
	for(i=1;i<=a-1;i++){
		if(a%i==0){
			sum+=i;
		}
}
	if(sum==a){
		printf("YES\n");
	}
	else 
	printf("NO\n");
}
}