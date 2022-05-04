"""
2022-03-26 10:17:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 12 ms | 1636 KB
Accepted | 1 * (60 / 100) | 13 ms | 1700 KB

"""

#include<stdio.h>
int main(){
	int n,x[100],i,p,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		m=1;
		for(p=2;p<x[i];p++){
			if(x[i]%p==0){
				m=m+p;
			}
		}
		if(m==x[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}