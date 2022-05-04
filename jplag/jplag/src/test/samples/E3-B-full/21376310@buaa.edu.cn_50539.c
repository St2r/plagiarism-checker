"""
2022-03-27 21:30:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1620 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,i,s=0,n;
	scanf("%d",&n);
	while(~scanf("%d",&a)){
		s=0;
		for(i=1;i<a;i++){
			if(!(a%i)){
				s+=i;
			}
		}
		if(s==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		
	}
	
	return 0;
	
}