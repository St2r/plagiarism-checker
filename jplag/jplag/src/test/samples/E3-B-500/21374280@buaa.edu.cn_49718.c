"""
2022-03-28 21:42:46
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1744 KB
Accepted | 1 * (35 / 100) | 0 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,x[100],y[100]={0},i=0;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&x[i]);
		i++;
	}
	for(i=0;i<n;i++){
		for(int j=1;j<x[i];j++){
			if(x[i]%j==0){
				y[i]+=j;
			}
		}
	}
	for(i=0;i<n;i++){
		if(x[i]==y[i])
		printf("YES\n");
		else
		printf("NO\n"); 
	}
	return 0;
}