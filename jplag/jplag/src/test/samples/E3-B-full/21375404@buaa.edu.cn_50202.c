"""
2022-03-28 20:33:20
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include<stdio.h>
int main(){
	int n,i,j,s,a,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=1,s=0;j<=a/2;j++){
			if(a%j==0){
				s=s+j;
			}
		}
		if(s==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
    return 0;
}