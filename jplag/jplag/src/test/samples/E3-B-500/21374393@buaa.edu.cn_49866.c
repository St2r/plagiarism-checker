"""
2022-03-26 14:28:37
AC
1.0
Accepted | 1 * (1 / 8) | 2 ms | 1652 KB
Accepted | 1 * (1 / 8) | 11 ms | 1628 KB
Accepted | 1 * (1 / 8) | 8 ms | 1656 KB
Accepted | 1 * (1 / 8) | 3 ms | 1612 KB
Accepted | 1 * (1 / 8) | 2 ms | 1612 KB
Accepted | 1 * (1 / 8) | 2 ms | 1632 KB
Accepted | 1 * (1 / 8) | 3 ms | 1700 KB
Accepted | 1 * (1 / 8) | 4 ms | 1700 KB

"""

#include <stdio.h>
int main()
{
	int n,x[100],i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		s=0;
		for(j=1;j<x[i];j++){
			if(x[i]%j==0){
				s+=j;
			}
		}
		if(s==x[i]){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}