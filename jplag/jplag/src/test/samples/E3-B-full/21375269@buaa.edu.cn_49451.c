"""
2022-03-26 11:55:45
AC
1.0
Accepted | 1.0 * (3 / 15) | 9 ms | 1980 KB
Accepted | 1.0 * (2 / 15) | 10 ms | 2040 KB
Accepted | 1.0 * (4 / 15) | 3 ms | 2032 KB
Accepted | 1.0 * (1 / 15) | 12 ms | 1960 KB
Accepted | 1.0 * (5 / 15) | 5 ms | 2032 KB
B

"""

#include<stdio.h> 
#include<string.h>
#include<ctype.h>
#include<math.h>
int main(){
	int n,t,sum;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&t);
		sum = 0;
		for(int i=1;i<=t/2;i++){
			if(t % i == 0) sum += i;
		}
		if(sum == t) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}