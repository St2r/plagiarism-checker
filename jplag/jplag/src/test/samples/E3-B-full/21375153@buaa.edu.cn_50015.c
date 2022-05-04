"""
2022-03-26 21:44:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 3 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include<stdio.h>

int main()
{
	int n,x[10005],i,j,k=0,r=0,a[10005],m;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=1;j<x[i];j++){
			m=x[i]%j;
			if(m==0){
				r+=j;
			}
		}
		
		if(r==x[i]){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		r=0;
	}
	
	return 0;
}