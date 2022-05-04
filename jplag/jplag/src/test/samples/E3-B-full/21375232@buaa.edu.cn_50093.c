"""
2022-03-26 13:03:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include <stdio.h>

int main()
{
	int n,number=0,x,i,j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&x);
			for(j=1;j<x;j++){
					if(x%j==0){
						number+=j;
					}
					
			}
		if(number==x){
			number=0;
			printf("YES\n");
		}else{
			number=0;
			printf("NO\n");}	
			
	}
	return 0;
}