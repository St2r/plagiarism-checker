"""
2022-03-26 19:31:10
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 3 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1688 KB

"""

#include <stdio.h>
int main(){
	int n,num,i,j,s=0;
	scanf("%d",&n);
	while(n--){
		s=0;
		scanf("%d",&num);
		for(i=1;i<num;i++){
			if(num%i==0){
				s+=i;
			}
		}
		if(s==num)
			printf("YES\n");
		else
			printf("NO\n");	
}	
	return 0;
}