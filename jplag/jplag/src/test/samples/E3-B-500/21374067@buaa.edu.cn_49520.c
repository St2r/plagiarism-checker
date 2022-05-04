"""
2022-03-26 10:36:39
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1704 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 11 ms | 1700 KB
Accepted | 1 * (1 / 4) | 14 ms | 1600 KB

"""

#include<stdio.h>
int t,n;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int nn=0;
		for(int i=1;i<=n/2;i++){
			if(n%i==0) nn+=i;
		}
		if(nn==n) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}