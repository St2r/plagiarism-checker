"""
2022-03-27 13:56:50
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1692 KB
Accepted | 1 * (35 / 100) | 8 ms | 1664 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include<stdio.h>
int main(){
 int n,i;
 double c=1,e=1;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
 	c*=i;
 	if(1/c>=1e-18){
 		e+=1/c;
	 }
 }
 printf("%.14f",e);
 return 0;
}