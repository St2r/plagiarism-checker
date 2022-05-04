"""
2022-03-29 22:21:42
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>

int main(){
	int n,a,b,c=0,i;
	scanf("%d",&n);
	i=n;
	while(i>0){
		c=0;
	scanf("%d",&a);
	b=a-1;
	while(b>0){
		if(a%b==0){
			c=c+b;
		}	b--;
	}if(a==c){
		printf("YES\n");
	}else{
		printf("NO\n");
	}i--;}
}