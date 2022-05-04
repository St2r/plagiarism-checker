"""
2022-03-29 23:49:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include <stdio.h>
int main()
{
	int i;
	int n;
	int sum,k,s=0;
	scanf("%d",&i); 
	while(i--){
	scanf("%d",&n);
	for(k=1,s=0;k<n;k++){
		if(n%k==0){
			s=s+k;
		}
	}
	if(s==n){
		printf("YES\n");
	}else{
		printf("NO\n");
    }
}
     return 0;
}