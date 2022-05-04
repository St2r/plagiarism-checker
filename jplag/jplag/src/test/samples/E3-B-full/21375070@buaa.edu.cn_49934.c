"""
2022-03-26 23:23:40
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1556 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 13 ms | 1636 KB

"""

#include<stdio.h>
int main(){
	int n,a,b,i;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		b=0;
		for(i=1;i<a;i++){
			if(a%i==0)
			b+=i;	
		}
		if(b==a){
			printf("YES\n");
		}
		else{printf("NO\n");
		}
	}
	return 0;
}