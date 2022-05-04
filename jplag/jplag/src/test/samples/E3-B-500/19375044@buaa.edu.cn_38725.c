"""
2022-03-29 01:54:29
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1588 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include<stdio.h>
int main(){
	int n,i=0,a,j=1,b=0;
	scanf("%d",&n);
   	for(i=0;i<n;i++) {
	scanf("%d",&a);
	for(j=1;j<a;j++){
		if(a%j==0) 
		b=b+j;
	}	
    if(a==b)
    printf("YES\n");
    else printf("NO\n");
    b=0;
}
	return 0;
}