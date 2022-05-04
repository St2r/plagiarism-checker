"""
2022-03-26 16:17:29
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1696 KB
Accepted | 1 * (35 / 100) | 12 ms | 1632 KB
Accepted | 1 * (60 / 100) | 14 ms | 1624 KB

"""

#include <stdio.h>

int main(){
	int n,m,i,sum=0,s;
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%d",&s);
		for(i=1;i<s;i++){
			if(s%i==0){
				sum+=i;
			}
		}
		if(sum==s)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}