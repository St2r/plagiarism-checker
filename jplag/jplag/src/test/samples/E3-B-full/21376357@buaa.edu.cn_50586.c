"""
2022-03-26 12:00:36
AC
1.0
Accepted | 1 * (5 / 100) | 16 ms | 1664 KB
Accepted | 1 * (35 / 100) | 12 ms | 1600 KB
Accepted | 1 * (60 / 100) | 22 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int x;
	int y,s=0;
	int n;
	
	scanf("%d",&n);

	while(n--){
		scanf("%d",&x);
	
		s=0;
	
		int i;
		for(i=1;i<x;i++){
			if(x%i==0){
				s+=i;
			}
		}
		
		if(s==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}
	
	
	
	return 0;
}