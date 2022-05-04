"""
2022-03-27 10:47:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int x,n,i,j,s;
	scanf("%d",&n);
	for (i=1; i<=n; i++){
		scanf("%d",&x);
		s=0;
		for (j=1; j<x; j++){
			if((x%j)==0){
				s+=j;
			}
		}
		if(s==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}