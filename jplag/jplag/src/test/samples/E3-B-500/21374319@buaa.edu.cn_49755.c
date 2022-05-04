"""
2022-03-26 18:31:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include<stdio.h>
int All(int a){
	int s=0,i;
	for(i=1;i<a;i++){
		if(a%i==0){
			s+=i;
		}
	}
	if(s==a){
		return 1;
	}else return 0;
}
int main(){
	int n,i,x[110];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
	}
	for(i=0;i<n;i++){
		if(All(x[i])){
			printf("YES\n");
		}else printf("NO\n");
	}
	return 0;
}