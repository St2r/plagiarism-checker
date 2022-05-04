"""
2022-03-29 22:52:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main(){
	int n,i,x,s,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		scanf("%d",&x);
		s=0;
		for(i=1;i<x;i++){
			if(x%i==0){
			s=s+i;	
			}
		}if(x==s){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}return 0;
}