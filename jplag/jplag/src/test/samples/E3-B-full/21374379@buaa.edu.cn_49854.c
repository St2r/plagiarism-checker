"""
2022-03-26 08:58:02
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include<stdio.h>
int main(){
	int n,a,i,j,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0)s+=j;
		}
		if(s==a)printf("YES\n");
		else printf("NO\n"); 
		s=0;
	}
	return 0;
}