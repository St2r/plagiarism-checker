"""
2022-03-26 16:13:04
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1620 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>

int main()
{
	int i,m,n,num;
	scanf("%d",&n);
	
	for(m=1;m<=n;m++){
		scanf("%d",&num);
		int sum=0;
		
		for(i=1;i<num;i++){
			if(num%i==0){
				sum=sum+i;
			}
		}
		
		if(sum==num){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
    return 0;
}