"""
2022-03-29 16:34:14
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1632 KB
Accepted | 1 * (60 / 100) | 2 ms | 1748 KB

"""

#include <stdio.h>
#include <math.h>
int main(){
	int n,x[10001],i,j=0,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		j=0;
	m=x[i]-1;
    for(;m>0;m--){
		if(x[i]%m==0){
			j=j+m;
		}
	}if(j==x[i]){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	}
 return 0;
}