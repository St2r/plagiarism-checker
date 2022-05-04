"""
2022-03-29 18:04:49
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 3 ms | 1592 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(){

 	int n,a[n+1],i,j;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++){
 		scanf("%d",&a[i]);
	 }
	 int c=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=a[i]/2;j++){
			if(a[i]%j==0){
				c+=j;
			}	
		}
		if(c==a[i])puts("YES");
			else puts("NO");c=0;
	}
return 0;}