"""
2022-03-27 21:17:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 3 ms | 1712 KB
Accepted | 1 * (60 / 100) | 13 ms | 1552 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k,y,sum=0;
	scanf("%d\n",&n);
	int x[n];
	for(i=1;i<=n;i++){
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n;i++){
		y=x[i];
		for(j=1;j<y;j++){
			k=y%j;
			if(k==0){
			sum+=j;
		}
		}
		if(sum==x[i]){
			printf("YES\n");
			}else{
				printf("NO\n");
			}
			sum=0;
		
		
		}
	
	return 0;
 }