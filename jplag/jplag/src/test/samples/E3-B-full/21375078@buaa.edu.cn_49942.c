"""
2022-03-27 16:51:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1696 KB
Accepted | 1 * (60 / 100) | 14 ms | 1700 KB

"""

#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n>0){
		int x;
		scanf("%d",&x);
		int i=1,sum=0;
		for(i=1;i<x;i++){
			if(x%i==0)
		     sum+=i;
	}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	n--;
	}
	return 0;
}