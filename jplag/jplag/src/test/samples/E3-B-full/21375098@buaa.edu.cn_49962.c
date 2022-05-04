"""
2022-03-26 10:02:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 16 ms | 1608 KB

"""

#include <ctype.h>
#include <stdio.h> 
#include <math.h> 
#include <string.h>
int main(){
	int n,a[104],i,j,s[104]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++){
			if(a[i]%j==0) s[i]+=j;
		}
	}
	for(i=1;i<=n;i++){
		if(a[i]==s[i]) printf("YES\n");
		else printf("NO\n");
	}
	
}