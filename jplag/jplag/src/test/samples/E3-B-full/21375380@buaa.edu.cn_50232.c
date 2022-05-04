"""
2022-03-26 11:37:41
AC
1.0
Accepted | 1 * (5 / 100) | 15 ms | 1528 KB
Accepted | 1 * (35 / 100) | 9 ms | 1612 KB
Accepted | 1 * (60 / 100) | 16 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,i=0,x,a,b[105]={0};
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&x);
		for(int j=1;j<x;j++){
			a=x%j;
			if(a==0){
				b[i]=b[i]+j;
			}
		} 
		if(x==b[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		i++;
	}
	return 0;
}