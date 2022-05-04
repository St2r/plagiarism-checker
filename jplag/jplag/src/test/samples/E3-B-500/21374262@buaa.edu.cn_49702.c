"""
2022-03-29 09:22:05
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1572 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include <stdio.h>
int main(){
	int n,x[102],m,y=0,i=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x[i]);
		
		for(m=1;m<=((x[i]+1)/2);m++){
			
			if(x[i]%m==0){
				y=y+m;
			}
		}
		if(y==x[i])
		printf("YES\n") ;
		if(y!=x[i])
		printf("NO\n");
		i++;
		y=0;
	}
}