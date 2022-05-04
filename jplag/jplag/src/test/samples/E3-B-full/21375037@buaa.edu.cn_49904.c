"""
2022-03-26 17:07:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 17 ms | 1632 KB
Accepted | 1 * (60 / 100) | 17 ms | 1656 KB

"""

#include <stdio.h>
int main(){
	int n,i=1,a,c=0,b;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		for(b=1;b<a;b++){
			if(a%b==0){
				c=c+b;}
			else{
				c=c+0;}}
			if(c==a){
			printf("YES\n");}
			else{
			printf("NO\n");}
			c=0;
			i=i+1;}
	return 0;
}