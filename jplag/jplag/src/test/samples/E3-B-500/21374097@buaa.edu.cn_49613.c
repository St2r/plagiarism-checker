"""
2022-03-27 23:10:57
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1640 KB
Accepted | 1 * (60 / 100) | 4 ms | 1536 KB

"""

#include<stdio.h>
int main(){
	int n,i,j,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		b=0;
		scanf("%d",&a);
		for(j=1;j<a;j++){
			
			if(a%j==0){
				b=b+j;
			}
			
		}
		if(a==b){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
		return 0;
	}