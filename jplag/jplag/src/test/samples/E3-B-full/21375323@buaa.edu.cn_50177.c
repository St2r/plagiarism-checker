"""
2022-03-26 13:53:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 3 ms | 1608 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include<stdio.h>

int main()

{
	int n,x,t=0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&x);
		t=0;
		for(int j = 1;j<x;j++){
			if(x%j==0){
				t+=j;
			}
		}
		if(t==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}